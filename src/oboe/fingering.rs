//! Fingering and keys are based on Marigaux Lemaire

use crate::music::note::*;

pub type Key = u32;

pub const RIGHT_LITTLE_EFLAT   :Key = 1 << 0;
pub const RIGHT_LITTLE_CSHARP  :Key = 1 << 1;
pub const RIGHT_LITTLE_C       :Key = 1 << 2;
pub const RIGHT_RING           :Key = 1 << 3;
pub const RIGHT_RING_F         :Key = 1 << 4;
pub const RIGHT_MIDDLE         :Key = 1 << 5;
pub const RIGHT_MIDDLE_TR3     :Key = 1 << 6;
pub const RIGHT_POINTER        :Key = 1 << 7;
pub const RIGHT_POINTER_GSHARP :Key = 1 << 8;

pub const LEFT_LITTLE_F        :Key = 1 << 9;
pub const LEFT_LITTLE_BFLAT    :Key = 1 << 10;
pub const LEFT_LITTLE_B        :Key = 1 << 11;
pub const LEFT_LITTLE_EFLAT    :Key = 1 << 12;
pub const LEFT_LITTLE_GSHARP   :Key = 1 << 13;
pub const LEFT_RING            :Key = 1 << 14;
pub const LEFT_RING_TR2        :Key = 1 << 15;
pub const LEFT_MIDDLE          :Key = 1 << 16;
pub const LEFT_MIDDLE_TR1      :Key = 1 << 17;
pub const LEFT_POINTER         :Key = 1 << 18;
pub const LEFT_POINTER_HALF    :Key = 1 << 19;
pub const LEFT_POINTER_82      :Key = 1 << 20;
pub const LEFT_THUMB_81        :Key = 1 << 21;
pub const LEFT_THUMB_83        :Key = 1 << 22;

/// Convert a bit flag of key combination to pitch
pub fn keys_to_pitch(combination: Key) -> Option<Pitch> {
    match combination {
        // Bb3
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_BFLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C =>
            Some(Pitch { octave: 3, pitch_name: PitchName::B, accidental: Accidental::Flat, }),
        // B3
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_B | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C =>
            Some(Pitch { octave: 3, pitch_name: PitchName::B, accidental: Accidental::Natural, }),
        // C4
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_C =>
            Some(MIDDLE_C),
        // C#4
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_CSHARP =>
            Some(Pitch { octave: 4, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        //// C#4 trill
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_EFLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_CSHARP =>
            Some(Pitch { octave: 4, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        // D4
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING =>
            Some(Pitch { octave: 4, pitch_name: PitchName::D, accidental: Accidental::Natural, }),
        // Eb4
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_EFLAT =>
            Some(Pitch { octave: 4, pitch_name: PitchName::E, accidental: Accidental::Flat, }),
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_EFLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING =>
            Some(Pitch { octave: 4, pitch_name: PitchName::E, accidental: Accidental::Flat, }),
        // E4
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE =>
            Some(Pitch { octave: 4, pitch_name: PitchName::E, accidental: Accidental::Natural, }),
        // F4
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING_F =>
            Some(Pitch { octave: 4, pitch_name: PitchName::F, accidental: Accidental::Natural, }),
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_F | RIGHT_POINTER | RIGHT_MIDDLE =>
            Some(Pitch { octave: 4, pitch_name: PitchName::F, accidental: Accidental::Natural, }),
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_RING =>
            Some(Pitch { octave: 4, pitch_name: PitchName::F, accidental: Accidental::Natural, }),
        // F#4
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER =>
            Some(Pitch { octave: 4, pitch_name: PitchName::F, accidental: Accidental::Sharp, }),
        //// F#4 trill
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_GSHARP | RIGHT_POINTER =>
            Some(Pitch { octave: 4, pitch_name: PitchName::F, accidental: Accidental::Sharp, }),
        // G4
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING  =>
            Some(Pitch { octave: 4, pitch_name: PitchName::G, accidental: Accidental::Natural, }),
        //// G4 trill
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_MIDDLE | RIGHT_RING_F =>
            Some(Pitch { octave: 4, pitch_name: PitchName::G, accidental: Accidental::Natural, }),
        // G#4
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_GSHARP =>
            Some(Pitch { octave: 4, pitch_name: PitchName::G, accidental: Accidental::Sharp, }),
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER_GSHARP =>
            Some(Pitch { octave: 4, pitch_name: PitchName::G, accidental: Accidental::Sharp, }),
        // A4
        n if n == LEFT_POINTER | LEFT_MIDDLE =>
            Some(Pitch { octave: 4, pitch_name: PitchName::A, accidental: Accidental::Natural, }),
        // Bb4
        n if n == LEFT_POINTER | LEFT_MIDDLE | RIGHT_POINTER =>
            Some(Pitch { octave: 4, pitch_name: PitchName::B, accidental: Accidental::Flat, }),
        //// Bb4 trill
        n if n == LEFT_POINTER | LEFT_RING | LEFT_LITTLE_GSHARP =>
            Some(Pitch { octave: 4, pitch_name: PitchName::B, accidental: Accidental::Flat, }),
        n if n == LEFT_POINTER | LEFT_MIDDLE | LEFT_LITTLE_GSHARP | RIGHT_POINTER =>
            Some(Pitch { octave: 4, pitch_name: PitchName::B, accidental: Accidental::Flat, }),
        // B4
        n if n == LEFT_POINTER =>
            Some(Pitch { octave: 4, pitch_name: PitchName::B, accidental: Accidental::Natural, }),
        //// B4 trill
        n if n == LEFT_POINTER | LEFT_LITTLE_GSHARP | RIGHT_POINTER =>
            Some(Pitch { octave: 4, pitch_name: PitchName::B, accidental: Accidental::Natural, }),
        // C5
        n if n == LEFT_POINTER | RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::C, accidental: Accidental::Natural, }),
        // C#5
        n if n == LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_CSHARP =>
            Some(Pitch { octave: 5, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        //// C#5 trill
        n if n == LEFT_POINTER | LEFT_RING_TR2 =>
            Some(Pitch { octave: 5, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        n if n == RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        n if n == LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_EFLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_CSHARP =>
            Some(Pitch { octave: 5, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        // D5
        n if n == LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING =>
            Some(Pitch { octave: 5, pitch_name: PitchName::D, accidental: Accidental::Natural, }),
        //// D5 trill
        n if n == LEFT_POINTER | RIGHT_POINTER | RIGHT_MIDDLE_TR3 =>
            Some(Pitch { octave: 5, pitch_name: PitchName::D, accidental: Accidental::Natural, }),
        // Eb5
        n if n == LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_EFLAT =>
            Some(Pitch { octave: 5, pitch_name: PitchName::E, accidental: Accidental::Flat, }),
        n if n == LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_EFLAT | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING =>
            Some(Pitch { octave: 5, pitch_name: PitchName::E, accidental: Accidental::Flat, }),
        // E5
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE =>
            Some(Pitch { octave: 5, pitch_name: PitchName::E, accidental: Accidental::Natural, }),
        // F5
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_MIDDLE | RIGHT_RING_F =>
            Some(Pitch { octave: 5, pitch_name: PitchName::F, accidental: Accidental::Natural, }),
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_F | RIGHT_POINTER | RIGHT_MIDDLE =>
            Some(Pitch { octave: 5, pitch_name: PitchName::F, accidental: Accidental::Natural, }),
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_RING =>
            Some(Pitch { octave: 5, pitch_name: PitchName::F, accidental: Accidental::Natural, }),
        // F#5
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::F, accidental: Accidental::Sharp, }),
        //// F#5 trill
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_GSHARP | RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::F, accidental: Accidental::Sharp, }),
        // G5
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING =>
            Some(Pitch { octave: 5, pitch_name: PitchName::G, accidental: Accidental::Natural, }),
        //// G5 trill
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_MIDDLE | RIGHT_RING_F =>
            Some(Pitch { octave: 5, pitch_name: PitchName::G, accidental: Accidental::Natural, }),
        // G#5
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_GSHARP =>
            Some(Pitch { octave: 5, pitch_name: PitchName::G, accidental: Accidental::Sharp, }),
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER_GSHARP =>
            Some(Pitch { octave: 5, pitch_name: PitchName::G, accidental: Accidental::Sharp, }),
        // A5
        n if n == LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE =>
            Some(Pitch { octave: 5, pitch_name: PitchName::A, accidental: Accidental::Natural, }),
        n if n == LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE =>
            Some(Pitch { octave: 5, pitch_name: PitchName::A, accidental: Accidental::Natural, }),
        // Bb5
        n if n == LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE | RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::B, accidental: Accidental::Flat, }),
        n if n == LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE | RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::B, accidental: Accidental::Flat, }),
        //// Bb5 trill
        n if n == LEFT_THUMB_81 | LEFT_POINTER | LEFT_RING | LEFT_LITTLE_GSHARP =>
            Some(Pitch { octave: 5, pitch_name: PitchName::B, accidental: Accidental::Flat, }),
        n if n == LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE | LEFT_LITTLE_GSHARP | RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::B, accidental: Accidental::Flat, }),
        n if n == LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE | LEFT_LITTLE_GSHARP | RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::B, accidental: Accidental::Flat, }),
        // B5
        n if n == LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::B, accidental: Accidental::Natural, }),
        n if n == LEFT_POINTER_82 | LEFT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::B, accidental: Accidental::Natural, }),
        //// B5 trill
        n if n == LEFT_POINTER_82 | LEFT_THUMB_81 | LEFT_POINTER | LEFT_LITTLE_GSHARP | RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::B, accidental: Accidental::Natural, }),
        n if n == LEFT_POINTER_82 | LEFT_POINTER | LEFT_LITTLE_GSHARP | RIGHT_POINTER =>
            Some(Pitch { octave: 5, pitch_name: PitchName::B, accidental: Accidental::Natural, }),
        // C6
        n if n == LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | RIGHT_POINTER =>
            Some(Pitch { octave: 6, pitch_name: PitchName::C, accidental: Accidental::Natural, }),
        n if n == LEFT_POINTER_82 | LEFT_POINTER | RIGHT_POINTER =>
            Some(Pitch { octave: 6, pitch_name: PitchName::C, accidental: Accidental::Natural, }),
        // C#6
        n if n == LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER | RIGHT_LITTLE_C =>
            Some(Pitch { octave: 6, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        //// C#6 trill
        n if n == LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_RING_TR2 =>
            Some(Pitch { octave: 6, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        n if n == LEFT_POINTER_82 | LEFT_POINTER | LEFT_RING_TR2 =>
            Some(Pitch { octave: 6, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        n if n == LEFT_THUMB_81 | LEFT_POINTER_82 | RIGHT_POINTER =>
            Some(Pitch { octave: 6, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        n if n == LEFT_POINTER_82 | RIGHT_POINTER =>
            Some(Pitch { octave: 6, pitch_name: PitchName::C, accidental: Accidental::Sharp, }),
        // D6
        n if n == LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_LITTLE_C =>
            Some(Pitch { octave: 6, pitch_name: PitchName::D, accidental: Accidental::Natural, }),
        n if n == LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_RING | RIGHT_LITTLE_C =>
            Some(Pitch { octave: 6, pitch_name: PitchName::D, accidental: Accidental::Natural, }),
        //// D6 trill
        n if n == LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE_TR1 | RIGHT_RING =>
            Some(Pitch { octave: 6, pitch_name: PitchName::D, accidental: Accidental::Natural, }),
        n if n == LEFT_POINTER_82 | LEFT_POINTER | LEFT_MIDDLE_TR1 | RIGHT_RING =>
            Some(Pitch { octave: 6, pitch_name: PitchName::D, accidental: Accidental::Natural, }),
        n if n == LEFT_THUMB_81 | LEFT_POINTER_82 | LEFT_POINTER | RIGHT_RING | RIGHT_MIDDLE_TR3 =>
            Some(Pitch { octave: 6, pitch_name: PitchName::D, accidental: Accidental::Natural, }),
        n if n == LEFT_POINTER_82 | LEFT_POINTER | RIGHT_RING | RIGHT_MIDDLE_TR3 =>
            Some(Pitch { octave: 6, pitch_name: PitchName::D, accidental: Accidental::Natural, }),
        // Eb6
        n if n == LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_B | RIGHT_MIDDLE | RIGHT_RING =>
            Some(Pitch { octave: 6, pitch_name: PitchName::E, accidental: Accidental::Flat, }),
        n if n == LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_MIDDLE | RIGHT_RING =>
            Some(Pitch { octave: 6, pitch_name: PitchName::E, accidental: Accidental::Flat, }),
        // E6
        n if n == LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_GSHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_EFLAT =>
            Some(Pitch { octave: 6, pitch_name: PitchName::E, accidental: Accidental::Natural, }),
        n if n == LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | RIGHT_POINTER_GSHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_EFLAT =>
            Some(Pitch { octave: 6, pitch_name: PitchName::E, accidental: Accidental::Natural, }),
        n if n == LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_RING | LEFT_LITTLE_GSHARP | LEFT_LITTLE_EFLAT | RIGHT_MIDDLE | RIGHT_RING =>
            Some(Pitch { octave: 6, pitch_name: PitchName::E, accidental: Accidental::Natural, }),
        // F6
        n if n == LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_LITTLE_GSHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_EFLAT =>
            Some(Pitch { octave: 6, pitch_name: PitchName::F, accidental: Accidental::Natural, }),
        n if n == LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | RIGHT_POINTER_GSHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_EFLAT =>
            Some(Pitch { octave: 6, pitch_name: PitchName::F, accidental: Accidental::Natural, }),
        n if n == LEFT_THUMB_83 | LEFT_POINTER_HALF | LEFT_MIDDLE | LEFT_LITTLE_GSHARP | LEFT_LITTLE_EFLAT | RIGHT_MIDDLE | RIGHT_RING =>
            Some(Pitch { octave: 6, pitch_name: PitchName::F, accidental: Accidental::Natural, }),
        // F#6
        n if n == LEFT_THUMB_83 | LEFT_POINTER | LEFT_MIDDLE | RIGHT_POINTER | RIGHT_LITTLE_C =>
            Some(Pitch { octave: 6, pitch_name: PitchName::F, accidental: Accidental::Sharp, }),
        n if n == LEFT_THUMB_83 | LEFT_POINTER | LEFT_LITTLE_GSHARP | RIGHT_MIDDLE | RIGHT_RING | RIGHT_LITTLE_EFLAT =>
            Some(Pitch { octave: 6, pitch_name: PitchName::F, accidental: Accidental::Sharp, }),
        n if n == LEFT_THUMB_83 | LEFT_POINTER | LEFT_LITTLE_GSHARP | LEFT_LITTLE_EFLAT | RIGHT_MIDDLE | RIGHT_RING =>
            Some(Pitch { octave: 6, pitch_name: PitchName::F, accidental: Accidental::Sharp, }),
        // G6
        n if n == LEFT_THUMB_83 | LEFT_POINTER | LEFT_RING | RIGHT_POINTER =>
            Some(Pitch { octave: 6, pitch_name: PitchName::G, accidental: Accidental::Natural, }),
        n if n == LEFT_THUMB_83 | LEFT_POINTER | LEFT_LITTLE_GSHARP | RIGHT_POINTER =>
            Some(Pitch { octave: 6, pitch_name: PitchName::G, accidental: Accidental::Natural, }),

        _ => None,
    }
}
