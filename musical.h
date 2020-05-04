#ifndef ROBOE_MUSICAL_H
#define ROBOE_MUSICAL_H

#include <Arduino.h>

enum class PitchName {
    C, D, E, F, G, A, B,
};

enum class Accidental {
    DOUBLE_FLAT,
    FLAT,
    NATURAL,
    SHARP,
    DOUBLE_SHARP,
};

class Pitch {
public:
    constexpr Pitch(int octave, PitchName pitchName, Accidental accidental):
            _octave(octave), _pitchName(pitchName), _accidental(accidental) {
    }

    byte toMidiNoteNumber() const {
        // MIDI note number of Middle C (C4) is 60
        // Hence MIDi note number of C0 (octave=0, pitchName=C, accidental=NATURAL) is 12
        byte number = 12;

        number += (_octave * 12);
        switch (_pitchName) {
            case PitchName::C:
                break;
            case PitchName::D:
                number += 2;
                break;
            case PitchName::E:
                number += 4;
                break;
            case PitchName::F:
                number += 5;
                break;
            case PitchName::G:
                number += 7;
                break;
            case PitchName::A:
                number += 9;
                break;
            case PitchName::B:
                number += 11;
                break;
        }

        switch (_accidental) {
            case Accidental::DOUBLE_FLAT:
                number -= 2;
                break;
            case Accidental::FLAT:
                number -= 1;
                break;
            case Accidental::NATURAL:
                break;
            case Accidental::SHARP:
                number += 1;
                break;
            case Accidental::DOUBLE_SHARP:
                number += 2;
                break;
        }

        return number;
    }

    bool operator==(const Pitch& other) const {
        return this->_octave == other._octave &&
               this->_pitchName == other._pitchName &&
               this->_accidental == other._accidental;
    }

private:
    int _octave;
    PitchName  _pitchName;
    Accidental _accidental;
};

constexpr Pitch PITCH_UNDEFINED { -1, PitchName::C, Accidental::NATURAL };
constexpr Pitch PITCH_MIDDLE_C { 4, PitchName::C, Accidental::NATURAL };

#endif //ROBOE_MUSICAL_H
