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

    void print() const;

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
