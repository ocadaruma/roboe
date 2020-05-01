#include "oboe.h"

static Pitch createPitch(int octave, PitchName pitchName, Accidental accidental) {
    Pitch pitch = {
            .octave = octave,
            .pitchName = pitchName,
            .accidental = accidental,
    };

    return pitch;
}

Pitch oboeKeyToPitch(OboeKey keys) {
    Pitch retVal;

    // Bb3
    if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_B_FLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C)) {
        retVal = createPitch(3, PITCH_NAME_B, ACCIDENTAL_FLAT);
    } else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_B | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C)) {
        retVal = createPitch(3, PITCH_NAME_B, ACCIDENTAL_NATURAL);
    }

    // C4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C)) {
        retVal = MIDDLE_C;
    }

    // C#4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C_SHARP)) {
        retVal = createPitch(4, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }
    // // C#4 trill
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_E_FLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C_SHARP)) {
        retVal = createPitch(4, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }

    // D4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING)) {
        retVal = createPitch(4, PITCH_NAME_D, ACCIDENTAL_NATURAL);
    }

    // Eb4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_E_FLAT)) {
        retVal = createPitch(4, PITCH_NAME_E, ACCIDENTAL_FLAT);
    }
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_E_FLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING)) {
        retVal = createPitch(4, PITCH_NAME_E, ACCIDENTAL_FLAT);
    }

    // E4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE)) {
        retVal = createPitch(4, PITCH_NAME_E, ACCIDENTAL_NATURAL);
    }

    // F4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING_F)) {
        retVal = createPitch(4, PITCH_NAME_F, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_F | RIGHT_POINTER | RIGHT_MIDDLE)) {
        retVal = createPitch(4, PITCH_NAME_F, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_RING)) {
        retVal = createPitch(4, PITCH_NAME_F, ACCIDENTAL_NATURAL);
    }

    // F#4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER)) {
        retVal = createPitch(4, PITCH_NAME_F, ACCIDENTAL_SHARP);
    }
    // // F#4 trill
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_G_SHARP | RIGHT_POINTER)) {
        retVal = createPitch(4, PITCH_NAME_F, ACCIDENTAL_SHARP);
    }

    // G4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING)) {
        retVal = createPitch(4, PITCH_NAME_G, ACCIDENTAL_NATURAL);
    }
    // // G4 trill
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_MIDDLE | RIGHT_RING_F)) {
        retVal = createPitch(4, PITCH_NAME_G, ACCIDENTAL_NATURAL);
    }

    // G#4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_G_SHARP)) {
        retVal = createPitch(4, PITCH_NAME_G, ACCIDENTAL_SHARP);
    }
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER_G_SHARP)) {
        retVal = createPitch(4, PITCH_NAME_G, ACCIDENTAL_SHARP);
    }

    // A4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE)) {
        retVal = createPitch(4, PITCH_NAME_A, ACCIDENTAL_NATURAL);
    }

    // Bb4
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | RIGHT_POINTER)) {
        retVal = createPitch(4, PITCH_NAME_B, ACCIDENTAL_FLAT);
    }
    // // Bb4 trill
    else if (keys == (LEFT_POINTER | LEFT_RING | LEFT_LITTLE_G_SHARP)) {
        retVal = createPitch(4, PITCH_NAME_B, ACCIDENTAL_FLAT);
    }
    else if (keys == (LEFT_POINTER | LEFT_MIDDLE | LEFT_LITTLE_G_SHARP | RIGHT_POINTER)) {
        retVal = createPitch(4, PITCH_NAME_B, ACCIDENTAL_FLAT);
    }

    // B4
    else if (keys == (LEFT_POINTER)) {
        retVal = createPitch(4, PITCH_NAME_B, ACCIDENTAL_NATURAL);
    }
    // // B4 trill
    else if (keys == (LEFT_POINTER | LEFT_LITTLE_G_SHARP | RIGHT_POINTER)) {
        retVal = createPitch(4, PITCH_NAME_B, ACCIDENTAL_NATURAL);
    }

    // C5
    else if (keys == (LEFT_POINTER | RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_C, ACCIDENTAL_NATURAL);
    }

    // C#5
    else if (keys == (LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C_SHARP)) {
        retVal = createPitch(5, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }
    // // C#5 trill
    else if (keys == (LEFT_POINTER | LEFT_RING_TR_2)) {
        retVal = createPitch(5, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }
    else if (keys == (RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }
    else if (keys == (LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_E_FLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C_SHARP)) {
        retVal = createPitch(5, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }

    // D5
    else if (keys == (LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING)) {
        retVal = createPitch(5, PITCH_NAME_D, ACCIDENTAL_NATURAL);
    }
    // // D5 trill
    else if (keys == (LEFT_POINTER | RIGHT_POINTER | RIGHT_MIDDLE_TR_3)) {
        retVal = createPitch(5, PITCH_NAME_D, ACCIDENTAL_NATURAL);
    }

    // Eb5
    else if (keys == (LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_E_FLAT)) {
        retVal = createPitch(5, PITCH_NAME_E, ACCIDENTAL_FLAT);
    }
    else if (keys == (LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_E_FLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING)) {
        retVal = createPitch(5, PITCH_NAME_E, ACCIDENTAL_FLAT);
    }

    // E5
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE)) {
        retVal = createPitch(5, PITCH_NAME_E, ACCIDENTAL_NATURAL);
    }

    // F5
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING_F)) {
        retVal = createPitch(5, PITCH_NAME_F, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_F | RIGHT_POINTER | RIGHT_MIDDLE)) {
        retVal = createPitch(5, PITCH_NAME_F, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_RING)) {
        retVal = createPitch(5, PITCH_NAME_F, ACCIDENTAL_NATURAL);
    }

    // F#5
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_F, ACCIDENTAL_SHARP);
    }
    // // F#5 trill
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_G_SHARP | RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_F, ACCIDENTAL_SHARP);
    }

    // G5
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING)) {
        retVal = createPitch(5, PITCH_NAME_G, ACCIDENTAL_NATURAL);
    }
    // // G5 trill
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_MIDDLE | RIGHT_RING_F)) {
        retVal = createPitch(5, PITCH_NAME_G, ACCIDENTAL_NATURAL);
    }

    // G#5
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_G_SHARP)) {
        retVal = createPitch(5, PITCH_NAME_G, ACCIDENTAL_SHARP);
    }
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER_G_SHARP)) {
        retVal = createPitch(5, PITCH_NAME_G, ACCIDENTAL_SHARP);
    }

    // A5
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE)) {
        retVal = createPitch(5, PITCH_NAME_A, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE)) {
        retVal = createPitch(5, PITCH_NAME_A, ACCIDENTAL_NATURAL);
    }

    // Bb5
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE | RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_B, ACCIDENTAL_FLAT);
    }
    else if (keys == (LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE | RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_B, ACCIDENTAL_FLAT);
    }
    // // Bb5 trill
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER | LEFT_RING | LEFT_LITTLE_G_SHARP)) {
        retVal = createPitch(5, PITCH_NAME_B, ACCIDENTAL_FLAT);
    }
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE | LEFT_LITTLE_G_SHARP | RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_B, ACCIDENTAL_FLAT);
    }
    else if (keys == (LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE | LEFT_LITTLE_G_SHARP | RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_B, ACCIDENTAL_FLAT);
    }

    // B5
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_B, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_POINTER_82 | LEFT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_B, ACCIDENTAL_NATURAL);
    }
    // // B5 trill
    else if (keys == (LEFT_POINTER_82 | LEFT_THUMB_81 | LEFT_POINTER | LEFT_LITTLE_G_SHARP | RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_B, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_POINTER_82 | LEFT_POINTER | LEFT_LITTLE_G_SHARP | RIGHT_POINTER)) {
        retVal = createPitch(5, PITCH_NAME_B, ACCIDENTAL_NATURAL);
    }

    // C6
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | RIGHT_POINTER)) {
        retVal = createPitch(6, PITCH_NAME_C, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_POINTER_82 | LEFT_POINTER | RIGHT_POINTER)) {
        retVal = createPitch(6, PITCH_NAME_C, ACCIDENTAL_NATURAL);
    }

    // C#6
    else if (keys == (LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_LITTLE_C)) {
        retVal = createPitch(6, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }
    // // C#6 trill
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_RING_TR_2)) {
        retVal = createPitch(6, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }
    else if (keys == (LEFT_POINTER_82 | LEFT_POINTER | LEFT_RING_TR_2)) {
        retVal = createPitch(6, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER_82 | RIGHT_POINTER)) {
        retVal = createPitch(6, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }
    else if (keys == (LEFT_POINTER_82 | RIGHT_POINTER)) {
        retVal = createPitch(6, PITCH_NAME_C, ACCIDENTAL_SHARP);
    }

    // D6
    else if (keys == (LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_LITTLE_C)) {
        retVal = createPitch(6, PITCH_NAME_D, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_RING | RIGHT_LITTLE_C)) {
        retVal = createPitch(6, PITCH_NAME_D, ACCIDENTAL_NATURAL);
    }
    // // D6 trill
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE_TR_1 | RIGHT_RING)) {
        retVal = createPitch(6, PITCH_NAME_D, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE_TR_1 | RIGHT_RING)) {
        retVal = createPitch(6, PITCH_NAME_D, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | RIGHT_RING | RIGHT_MIDDLE_TR_3)) {
        retVal = createPitch(6, PITCH_NAME_D, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_POINTER_82 | LEFT_POINTER | RIGHT_RING | RIGHT_MIDDLE_TR_3)) {
        retVal = createPitch(6, PITCH_NAME_D, ACCIDENTAL_NATURAL);
    }

    // Eb6
    else if (keys == (LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_B | RIGHT_MIDDLE | RIGHT_RING)) {
        retVal = createPitch(6, PITCH_NAME_E, ACCIDENTAL_FLAT);
    }
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_MIDDLE | RIGHT_RING)) {
        retVal = createPitch(6, PITCH_NAME_E, ACCIDENTAL_FLAT);
    }

    // E6
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_G_SHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_E_FLAT)) {
        retVal = createPitch(6, PITCH_NAME_E, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER_G_SHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_E_FLAT)) {
        retVal = createPitch(6, PITCH_NAME_E, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_G_SHARP | LEFT_LITTLE_E_FLAT | RIGHT_MIDDLE | RIGHT_RING)) {
        retVal = createPitch(6, PITCH_NAME_E, ACCIDENTAL_NATURAL);
    }

    // F6
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_LITTLE_G_SHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_E_FLAT)) {
        retVal = createPitch(6, PITCH_NAME_F, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | RIGHT_POINTER_G_SHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_E_FLAT)) {
        retVal = createPitch(6, PITCH_NAME_F, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_LITTLE_G_SHARP | LEFT_LITTLE_E_FLAT | RIGHT_MIDDLE | RIGHT_RING)) {
        retVal = createPitch(6, PITCH_NAME_F, ACCIDENTAL_NATURAL);
    }

    // F#6
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER | LEFT_MIDDLE | RIGHT_POINTER | RIGHT_LITTLE_C)) {
        retVal = createPitch(6, PITCH_NAME_F, ACCIDENTAL_SHARP);
    }
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER | LEFT_LITTLE_G_SHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_E_FLAT)) {
        retVal = createPitch(6, PITCH_NAME_F, ACCIDENTAL_SHARP);
    }
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER | LEFT_LITTLE_G_SHARP | LEFT_LITTLE_E_FLAT | RIGHT_MIDDLE | RIGHT_RING)) {
        retVal = createPitch(6, PITCH_NAME_F, ACCIDENTAL_SHARP);
    }

    // G6
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER | LEFT_RING | RIGHT_POINTER)) {
        retVal = createPitch(6, PITCH_NAME_G, ACCIDENTAL_NATURAL);
    }
    else if (keys == (LEFT_THUMB_83 | LEFT_POINTER | LEFT_LITTLE_G_SHARP | RIGHT_POINTER)) {
        retVal = createPitch(6, PITCH_NAME_G, ACCIDENTAL_NATURAL);
    }
    else {
        retVal = PITCH_UNDEFINED;
    }

    return retVal;
}
