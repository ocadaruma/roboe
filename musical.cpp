#include <Arduino.h>
#include "musical.h"

void Pitch::print() const {
    if (*this == PITCH_UNDEFINED) {
        Serial.print("UNDEFINED");
        return;
    }

    switch (this->_pitchName) {
        case PitchName::C:
            Serial.print("C");
            break;
        case PitchName::D:
            Serial.print("D");
            break;
        case PitchName::E:
            Serial.print("E");
            break;
        case PitchName::F:
            Serial.print("F");
            break;
        case PitchName::G:
            Serial.print("G");
            break;
        case PitchName::A:
            Serial.print("A");
            break;
        case PitchName::B:
            Serial.print("B");
            break;
        default:
            break;
    }
    switch (this->_accidental) {
        case Accidental::DOUBLE_FLAT:
            Serial.print("bb");
            break;
        case Accidental::FLAT:
            Serial.print("b");
            break;
        case Accidental::NATURAL:
            break;
        case Accidental::SHARP:
            Serial.print("#");
            break;
        case Accidental::DOUBLE_SHARP:
            Serial.print("##");
            break;
        default:
            break;
    }
    Serial.print(this->_octave);
}
