#include <Arduino.h>
#include <MIDI.h>
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
        { LEFT_POINTER     , LEFT_RING          , LEFT_LITTLE_F        , RIGHT_RING_F        , LEFT_THUMB_83   , },
        { LEFT_POINTER_HALF, LEFT_LITTLE_G_SHARP, RIGHT_POINTER_G_SHARP, RIGHT_RING          , LEFT_THUMB_81   , },
        { LEFT_MIDDLE_TR_1 , LEFT_LITTLE_E_FLAT , RIGHT_POINTER        , RIGHT_LITTLE_C      , LEFT_POINTER_82 , },
        { LEFT_MIDDLE      , LEFT_LITTLE_B      , RIGHT_MIDDLE_TR_3    , RIGHT_LITTLE_C_SHARP, OBOE_KEY_UNKNOWN, },
        { LEFT_RING_TR_2   , LEFT_LITTLE_B_FLAT , RIGHT_MIDDLE         , RIGHT_LITTLE_E_FLAT , OBOE_KEY_UNKNOWN, },
};

int breathIntensity;
int breathReading;
int breathCalibration;

int i, j;
int keyReading;

OboeKey oboeKey;
Pitch previousPitch = PITCH_UNDEFINED;
Pitch currentPitch = PITCH_UNDEFINED;
OboeKey keyFlags = 0L;

//bool currentState[SELECTOR_NUM][INPUT_NUM];
//bool beforeState[SELECTOR_NUM][INPUT_NUM];

void setup() {
    // breath controller part
    delay(200);
    Serial.begin(9600);
    breathCalibration = analogRead(SENSOR_PIN);

    // keys part
    for (i = 0; i < SELECTOR_NUM; i++) {
        pinMode(SELECTOR_PIN[i], OUTPUT);
    }
    for (i = 0; i < INPUT_NUM; i++) {
        pinMode(INPUT_PIN[i], INPUT_PULLUP);
    }
    for (i = 0; i < SELECTOR_NUM; i++) {
        digitalWrite(SELECTOR_PIN[i], HIGH);
    }
}

void loop() {
    // breath controller part
    breathReading = constrain(analogRead(A1) - breathCalibration, 0, BREATH_MAX_READING - breathCalibration);
    breathIntensity = map(breathReading, 0, BREATH_MAX_READING - breathCalibration, 0, 127);
    Serial.println(breathIntensity);

    // keys part
    for (i = 0; i < SELECTOR_NUM; i++) {
        digitalWrite(SELECTOR_PIN[i], LOW);

        for (j = 0; j < INPUT_NUM; j++) {
            oboeKey = OBOE_KEY_MAP[i][j];

            if (oboeKey == OBOE_KEY_UNKNOWN) {
                continue;
            }

            keyReading = digitalRead(INPUT_PIN[j]);
            if (keyReading == LOW) {
                keyFlags |= oboeKey;
            } else {
                keyFlags &= ~oboeKey;
            }

            currentPitch = oboeKeyToPitch(keyFlags);
            if (!pitchEquals(previousPitch, currentPitch)) {
                Serial.print("changed. pitch: ");
                printPitch(currentPitch);
                Serial.println();

                previousPitch = currentPitch;
            }
        }

        digitalWrite(SELECTOR_PIN[i], HIGH);
    }
}

void printPitch(Pitch pitch) {
    if (pitchEquals(pitch, PITCH_UNDEFINED)) {
        Serial.print("UNDEFINED");
        return;
    }

    switch (pitch.pitchName) {
        case PITCH_NAME_C:
            Serial.print("C");
            break;
        case PITCH_NAME_D:
            Serial.print("D");
            break;
        case PITCH_NAME_E:
            Serial.print("E");
            break;
        case PITCH_NAME_F:
            Serial.print("F");
            break;
        case PITCH_NAME_G:
            Serial.print("G");
            break;
        case PITCH_NAME_A:
            Serial.print("A");
            break;
        case PITCH_NAME_B:
            Serial.print("B");
            break;
        default:
            break;
    }
    switch (pitch.accidental) {
        case ACCIDENTAL_DOUBLE_FLAT:
            Serial.print("bb");
            break;
        case ACCIDENTAL_FLAT:
            Serial.print("b");
            break;
        case ACCIDENTAL_NATURAL:
            break;
        case ACCIDENTAL_SHARP:
            Serial.print("#");
            break;
        case ACCIDENTAL_DOUBLE_SHARP:
            Serial.print("##");
            break;
        default:
            break;
    }
    Serial.print(pitch.octave);
}
