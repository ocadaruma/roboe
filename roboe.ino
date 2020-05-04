#include <Arduino.h>
#include <MIDI.h>
#include "roboe.h"
#include "musical.h"
#include "oboe.h"

const int SENSOR_PIN = A1;
const int SELECTOR_NUM = 5;
const int INPUT_NUM = 5;

const int SELECTOR_PIN[SELECTOR_NUM] = {5, 6, 7, 8, 9};
const int INPUT_PIN[INPUT_NUM] = {0, 10, 2, 3, 4};

// Empirically determined max sensor value
const int BREATH_MAX_READING = 1014;

const OboeKey OBOE_KEY_MAP[SELECTOR_NUM][INPUT_NUM] = {
        { OboeKey::LEFT_POINTER     , OboeKey::LEFT_RING          , OboeKey::LEFT_LITTLE_F        , OboeKey::RIGHT_RING_F        , OboeKey::LEFT_THUMB_83   , },
        { OboeKey::LEFT_POINTER_HALF, OboeKey::LEFT_LITTLE_G_SHARP, OboeKey::RIGHT_POINTER_G_SHARP, OboeKey::RIGHT_RING          , OboeKey::LEFT_THUMB_81   , },
        { OboeKey::LEFT_MIDDLE_TR_1 , OboeKey::LEFT_LITTLE_E_FLAT , OboeKey::RIGHT_POINTER        , OboeKey::RIGHT_LITTLE_C      , OboeKey::LEFT_POINTER_82 , },
        { OboeKey::LEFT_MIDDLE      , OboeKey::LEFT_LITTLE_B      , OboeKey::RIGHT_MIDDLE_TR_3    , OboeKey::RIGHT_LITTLE_C_SHARP, OboeKey::UNKNOWN, },
        { OboeKey::LEFT_RING_TR_2   , OboeKey::LEFT_LITTLE_B_FLAT , OboeKey::RIGHT_MIDDLE         , OboeKey::RIGHT_LITTLE_E_FLAT , OboeKey::UNKNOWN, },
};

int BREATH_CALIBRATION;

MIDI_CREATE_DEFAULT_INSTANCE();
Roboe ROBOE(MIDI);

void setup() {
    delay(200);
    Serial.begin(9600);

    // initialize breath controller
    BREATH_CALIBRATION = analogRead(SENSOR_PIN);

    // initialize key matrix
    for (int pin : SELECTOR_PIN) {
        pinMode(pin, OUTPUT);
    }
    for (int pin : INPUT_PIN) {
        pinMode(pin, INPUT_PULLUP);
    }
    for (int pin : SELECTOR_PIN) {
        digitalWrite(pin, HIGH);
    }
}

void loop() {
    OboeKeys keyCombination;

    // keys part
    for (int i = 0; i < SELECTOR_NUM; i++) {
        digitalWrite(SELECTOR_PIN[i], LOW);

        for (int j = 0; j < INPUT_NUM; j++) {
            OboeKey oboeKey = OBOE_KEY_MAP[i][j];

            if (oboeKey == OboeKey::UNKNOWN) {
                continue;
            }

            int keyReading = digitalRead(INPUT_PIN[j]);
            if (keyReading == LOW) {
                keyCombination = keyCombination | oboeKey;
            } else {
                keyCombination = keyCombination - oboeKey;
            }
        }

        digitalWrite(SELECTOR_PIN[i], HIGH);
    }

    // breath controller part
    int breathReading = constrain(analogRead(A1) - BREATH_CALIBRATION, 0, BREATH_MAX_READING - BREATH_CALIBRATION);
    int breathIntensity = map(breathReading, 0, BREATH_MAX_READING - BREATH_CALIBRATION, 0, 127);

    ROBOE.update(breathIntensity, keyCombination);
}
