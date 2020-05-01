#ifndef ROBOE_MUSICAL_H
#define ROBOE_MUSICAL_H

#include <Arduino.h>

typedef enum {
    PITCH_NAME_C,
    PITCH_NAME_D,
    PITCH_NAME_E,
    PITCH_NAME_F,
    PITCH_NAME_G,
    PITCH_NAME_A,
    PITCH_NAME_B,
} PitchName;

typedef enum {
    ACCIDENTAL_DOUBLE_FLAT,
    ACCIDENTAL_FLAT,
    ACCIDENTAL_NATURAL,
    ACCIDENTAL_SHARP,
    ACCIDENTAL_DOUBLE_SHARP,
} Accidental;

typedef struct {
    int octave;
    PitchName pitchName;
    Accidental accidental;
} Pitch;

static const Pitch PITCH_UNDEFINED = {
        .octave = -1,
        .pitchName = PITCH_NAME_C,
        .accidental = ACCIDENTAL_DOUBLE_FLAT,
};

static const Pitch MIDDLE_C = {
        .octave = 4,
        .pitchName = PITCH_NAME_C,
        .accidental = ACCIDENTAL_NATURAL,
};

bool pitchEquals(Pitch left, Pitch right) {
    return left.octave == right.octave &&
           left.pitchName == right.pitchName &&
           left.accidental == right.accidental;
}

#endif //ROBOE_MUSICAL_H
