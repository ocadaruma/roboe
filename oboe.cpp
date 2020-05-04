#include "oboe.h"

Pitch OboeKeys::toPitch() const {
    // Bb3
    if (*this == (OboeKey::LEFT_POINTER |
                  OboeKey::LEFT_MIDDLE |
                  OboeKey::LEFT_RING |
                  OboeKey::LEFT_LITTLE_B_FLAT |
                  OboeKey::RIGHT_POINTER |
                  OboeKey::RIGHT_MIDDLE |
                  OboeKey::RIGHT_RING |
                  OboeKey::RIGHT_LITTLE_C)) {
        return { 3, PitchName::B, Accidental::FLAT };
    }

    // B3
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_B |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_C)) {
        return { 3, PitchName::B, Accidental::NATURAL };
    }

    // C4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_C)) {
        return PITCH_MIDDLE_C;
    }

    // C#4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_C_SHARP) ||
             // // C#4 trill
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_E_FLAT |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_C_SHARP)) {
        return { 4, PitchName::C, Accidental::SHARP };
    }

    // D4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING)) {
        return { 4, PitchName::D, Accidental::NATURAL };
    }

    // Eb4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_E_FLAT) ||
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_E_FLAT |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING)) {
        return { 4, PitchName::E, Accidental::FLAT };
    }

    // E4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE)) {
        return { 4, PitchName::E, Accidental::NATURAL };
    }

    // F4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING_F) ||
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_F |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE) ||
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_RING)) {
        return { 4, PitchName::F, Accidental::NATURAL };
    }

    // F#4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER) ||
             // // F#4 trill
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_POINTER)) {
        return { 4, PitchName::F, Accidental::SHARP };
    }

    // G4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING) ||
             // // G4 trill
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING_F)) {
        return { 4, PitchName::G, Accidental::NATURAL };
    }

    // G#4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_G_SHARP) ||
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER_G_SHARP)) {
        return { 4, PitchName::G, Accidental::SHARP };
    }

    // A4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE)) {
        return { 4, PitchName::A, Accidental::NATURAL };
    }

    // Bb4
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::RIGHT_POINTER) ||
             // // Bb4 trill
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_G_SHARP) ||
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_POINTER)) {
        return { 4, PitchName::B, Accidental::FLAT };
    }

    // B4
    else if (*this == (OboeKey::LEFT_POINTER) ||
             // // B4 trill
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_POINTER)) {
        return { 4, PitchName::B, Accidental::NATURAL };
    }

    // C5
    else if (*this == (OboeKey::LEFT_POINTER |
                       OboeKey::RIGHT_POINTER)) {
        return { 5, PitchName::C, Accidental::NATURAL };
    }

    // C#5
    else if (*this == (OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_C_SHARP) ||
             // // C#5 trill
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_RING_TR_2)||
             *this == (OboeKey::RIGHT_POINTER) ||
             *this == (OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_E_FLAT |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_C_SHARP)) {
        return { 5, PitchName::C, Accidental::SHARP };
    }

    // D5
    else if (*this == (OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING) ||
             // // D5 trill
             *this == (OboeKey::LEFT_POINTER |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE_TR_3)) {
        return { 5, PitchName::D, Accidental::NATURAL };
    }

    // Eb5
    else if (*this == (OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_E_FLAT) ||
             *this == (OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_E_FLAT |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING)) {
        return { 5, PitchName::E, Accidental::FLAT };
    }

    // E5
    else if (*this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE)) {
        return { 5, PitchName::E, Accidental::NATURAL };
    }

    // F5
    else if (*this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING_F) ||
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_F |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_MIDDLE) ||
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_RING)) {
        return { 5, PitchName::F, Accidental::NATURAL };
    }

        // F#5
    else if (*this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER) ||
             // // F#5 trill
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_POINTER)) {
        return { 5, PitchName::F, Accidental::SHARP };
    }

    // G5
    else if (*this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING) ||
             // // G5 trill
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING_F)) {
        return { 5, PitchName::G, Accidental::NATURAL };
    }

    // G#5
    else if (*this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_G_SHARP) ||
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER_G_SHARP)) {
        return { 5, PitchName::G, Accidental::SHARP };
    }

    // A5
    else if (*this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE)) {
        return { 5, PitchName::A, Accidental::NATURAL };
    }

    // Bb5
    else if (*this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::RIGHT_POINTER) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::RIGHT_POINTER) ||
             // // Bb5 trill
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_G_SHARP) ||
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_POINTER) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_POINTER)) {
        return { 5, PitchName::B, Accidental::FLAT };
    }

    // B5
    else if (*this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER) ||
             // // B5 trill
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_POINTER) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_POINTER)) {
        return { 5, PitchName::B, Accidental::NATURAL };
    }

    // C6
    else if (*this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::RIGHT_POINTER) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::RIGHT_POINTER)) {
        return { 6, PitchName::C, Accidental::NATURAL };
    }

    // C#6
    else if (*this == (OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_LITTLE_C) ||
             // // C#6 trill
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_RING_TR_2) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_RING_TR_2) ||
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER_82 |
                       OboeKey::RIGHT_POINTER) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::RIGHT_POINTER)) {
        return { 6, PitchName::C, Accidental::SHARP };
    }

    // D6
    else if (*this == (OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_LITTLE_C) ||
             *this == (OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_C) ||
             // // D6 trill
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE_TR_1 |
                       OboeKey::RIGHT_RING) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE_TR_1 |
                       OboeKey::RIGHT_RING) ||
             *this == (OboeKey::LEFT_THUMB_81 |
                       OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_MIDDLE_TR_3) ||
             *this == (OboeKey::LEFT_POINTER_82 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_MIDDLE_TR_3)) {
        return { 6, PitchName::D, Accidental::NATURAL };
    }

    // Eb6
    else if (*this == (OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_B |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING) ||
             *this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING)) {
        return { 6, PitchName::E, Accidental::FLAT };
    }

    // E6
    else if (*this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_E_FLAT) ||
             *this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER_G_SHARP |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_E_FLAT) ||
             *this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_RING |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::LEFT_LITTLE_E_FLAT |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING)) {
        return { 6, PitchName::E, Accidental::NATURAL };
    }

    // F6
    else if (*this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_E_FLAT) ||
             *this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::RIGHT_POINTER_G_SHARP |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_E_FLAT) ||
             *this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER_HALF |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::LEFT_LITTLE_E_FLAT |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING)) {
        return { 6, PitchName::F, Accidental::NATURAL };
    }

    // F#6
    else if (*this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_MIDDLE |
                       OboeKey::RIGHT_POINTER |
                       OboeKey::RIGHT_LITTLE_C) ||
             *this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING |
                       OboeKey::RIGHT_LITTLE_E_FLAT) ||
             *this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::LEFT_LITTLE_E_FLAT |
                       OboeKey::RIGHT_MIDDLE |
                       OboeKey::RIGHT_RING)) {
        return { 6, PitchName::F, Accidental::SHARP };
    }

    // G6
    else if (*this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_RING |
                       OboeKey::RIGHT_POINTER) ||
             *this == (OboeKey::LEFT_THUMB_83 |
                       OboeKey::LEFT_POINTER |
                       OboeKey::LEFT_LITTLE_G_SHARP |
                       OboeKey::RIGHT_POINTER)) {
        return { 6, PitchName::G, Accidental::NATURAL };
    }
    else {
        return PITCH_UNDEFINED;
    }
}

OboeKeys operator|(const OboeKey &left, const OboeKey &right) {
    return OboeKeys(static_cast<unsigned long>(left)) | right;
}
