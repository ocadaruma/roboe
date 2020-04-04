//! Fingering and keys are based on Marigaux Lemaire

use crate::music::note::*;
use crate::wasm_bindgen::prelude::*;
use Key::*;

#[wasm_bindgen]
#[derive(Copy, Clone, PartialOrd, PartialEq, Debug)]
pub struct Fingering {
    flags: i32,
}

#[wasm_bindgen]
impl Fingering {
    pub fn from_bitflags(flags: i32) -> Fingering {
        Fingering {
            flags,
        }
    }
}

/// Represents a key of oboe
#[repr(i32)]
#[wasm_bindgen]
#[derive(Copy, Clone, PartialOrd, PartialEq, Debug)]
pub enum Key {
    // wasm_bindgen currently doesn't support computation in enum initialization
    // (i.e. we can't write as 1 << 10)

    RightLittleEflat   = 1,
    RightLittleCsharp  = 2,
    RightLittleC       = 4,
    RightRing          = 8,
    RightRingF         = 16,
    RightMiddle        = 32,
    RightMiddleTr3     = 64,
    RightPointer       = 128,
    RightPointerGsharp = 256,

    LeftLittleF        = 512,
    LeftLittleBflat    = 1024,
    LeftLittleB        = 2048,
    LeftLittleEflat    = 4096,
    LeftLittleGsharp   = 8192,
    LeftRing           = 16384,
    LeftRingTr2        = 32768,
    LeftMiddle         = 65536,
    LeftMiddleTr1      = 131072,
    LeftPointer        = 262144,
    LeftMiddleHalf     = 524288,
    LeftPointer82      = 1048576,
    LeftThumb81        = 2097152,
    LeftThumb83        = 4194304,
}

impl std::ops::BitOr<Key> for Key {
    type Output = i32;

    fn bitor(self, rhs: Key) -> Self::Output {
        (self as i32) | (rhs as i32)
    }
}

impl std::ops::BitOr<Key> for i32 {
    type Output = i32;

    fn bitor(self, rhs: Key) -> Self::Output {
        self | (rhs as i32)
    }
}

/// Convert a bit flag of key combination to pitch
#[wasm_bindgen]
pub fn fingering_to_pitch(fingering: Fingering) -> Option<Pitch> {
    match fingering.flags {
        // Bb3
        n if n == LeftPointer | LeftMiddle | LeftRing | LeftLittleBflat | RightPointer | RightMiddle | RightRing | RightLittleC =>
            Some(Pitch::new(3, PitchName::B, Accidental::Flat)),
        // B3
        n if n == LeftPointer | LeftMiddle | LeftRing | LeftLittleB | RightPointer | RightMiddle | RightRing | RightLittleC =>
            Some(Pitch::new(3, PitchName::B, Accidental::Natural)),
        // C4
        n if n == LeftPointer | LeftMiddle | LeftRing | RightPointer | RightMiddle | RightRing | RightLittleC =>
            Some(MIDDLE_C),
        // C#4
        n if n == LeftPointer | LeftMiddle | LeftRing | RightPointer | RightMiddle | RightRing | RightLittleCsharp =>
            Some(Pitch::new(4, PitchName::C, Accidental::Sharp)),
        //// C#4 trill
        n if n == LeftPointer | LeftMiddle | LeftRing | LeftLittleEflat | RightPointer | RightMiddle | RightRing | RightLittleCsharp =>
            Some(Pitch::new(4, PitchName::C, Accidental::Sharp)),
        // D4
        n if n == LeftPointer | LeftMiddle | LeftRing | RightPointer | RightMiddle | RightRing =>
            Some(Pitch::new(4, PitchName::D, Accidental::Natural)),
        // Eb4
        n if n == LeftPointer | LeftMiddle | LeftRing | RightPointer | RightMiddle | RightRing | RightLittleEflat =>
            Some(Pitch::new(4, PitchName::E, Accidental::Flat)),
        n if n == LeftPointer | LeftMiddle | LeftRing | LeftLittleEflat | RightPointer | RightMiddle | RightRing =>
            Some(Pitch::new(4, PitchName::E, Accidental::Flat)),
        // E4
        n if n == LeftPointer | LeftMiddle | LeftRing | RightPointer | RightMiddle =>
            Some(Pitch::new(4, PitchName::E, Accidental::Natural)),
        // F4
        n if n == LeftPointer | LeftMiddle | LeftRing | RightPointer | RightMiddle | RightRingF =>
            Some(Pitch::new(4, PitchName::F, Accidental::Natural)),
        n if n == LeftPointer | LeftMiddle | LeftRing | LeftLittleF | RightPointer | RightMiddle =>
            Some(Pitch::new(4, PitchName::F, Accidental::Natural)),
        n if n == LeftPointer | LeftMiddle | LeftRing | RightPointer | RightRing =>
            Some(Pitch::new(4, PitchName::F, Accidental::Natural)),
        // F#4
        n if n == LeftPointer | LeftMiddle | LeftRing | RightPointer =>
            Some(Pitch::new(4, PitchName::F, Accidental::Sharp)),
        //// F#4 trill
        n if n == LeftPointer | LeftMiddle | LeftRing | LeftLittleGsharp | RightPointer =>
            Some(Pitch::new(4, PitchName::F, Accidental::Sharp)),
        // G4
        n if n == LeftPointer | LeftMiddle | LeftRing =>
            Some(Pitch::new(4, PitchName::G, Accidental::Natural)),
        //// G4 trill
        n if n == LeftPointer | LeftMiddle | LeftRing | RightMiddle | RightRingF =>
            Some(Pitch::new(4, PitchName::G, Accidental::Natural)),
        // G#4
        n if n == LeftPointer | LeftMiddle | LeftRing | LeftLittleGsharp =>
            Some(Pitch::new(4, PitchName::G, Accidental::Sharp)),
        n if n == LeftPointer | LeftMiddle | LeftRing | RightPointerGsharp =>
            Some(Pitch::new(4, PitchName::G, Accidental::Sharp)),
        // A4
        n if n == LeftPointer | LeftMiddle =>
            Some(Pitch::new(4, PitchName::A, Accidental::Natural)),
        // Bb4
        n if n == LeftPointer | LeftMiddle | RightPointer =>
            Some(Pitch::new(4, PitchName::B, Accidental::Flat)),
        //// Bb4 trill
        n if n == LeftPointer | LeftRing | LeftLittleGsharp =>
            Some(Pitch::new(4, PitchName::B, Accidental::Flat)),
        n if n == LeftPointer | LeftMiddle | LeftLittleGsharp | RightPointer =>
            Some(Pitch::new(4, PitchName::B, Accidental::Flat)),
        // B4
        n if n == LeftPointer as i32 =>
            Some(Pitch::new(4, PitchName::B, Accidental::Natural)),
        //// B4 trill
        n if n == LeftPointer | LeftLittleGsharp | RightPointer =>
            Some(Pitch::new(4, PitchName::B, Accidental::Natural)),
        // C5
        n if n == LeftPointer | RightPointer =>
            Some(Pitch::new(5, PitchName::C, Accidental::Natural)),
        // C#5
        n if n == LeftMiddleHalf | LeftMiddle | LeftRing | RightPointer | RightMiddle | RightRing | RightLittleCsharp =>
            Some(Pitch::new(5, PitchName::C, Accidental::Sharp)),
        //// C#5 trill
        n if n == LeftPointer | LeftRingTr2 =>
            Some(Pitch::new(5, PitchName::C, Accidental::Sharp)),
        n if n == RightPointer as i32 =>
            Some(Pitch::new(5, PitchName::C, Accidental::Sharp)),
        n if n == LeftMiddleHalf | LeftMiddle | LeftRing | LeftLittleEflat | RightPointer | RightMiddle | RightRing | RightLittleCsharp =>
            Some(Pitch::new(5, PitchName::C, Accidental::Sharp)),
        // D5
        n if n == LeftMiddleHalf | LeftMiddle | LeftRing | RightPointer | RightMiddle | RightRing =>
            Some(Pitch::new(5, PitchName::D, Accidental::Natural)),
        //// D5 trill
        n if n == LeftPointer | RightPointer | RightMiddleTr3 =>
            Some(Pitch::new(5, PitchName::D, Accidental::Natural)),
        // Eb5
        n if n == LeftMiddleHalf | LeftMiddle | LeftRing | RightPointer | RightMiddle | RightRing | RightLittleEflat =>
            Some(Pitch::new(5, PitchName::E, Accidental::Flat)),
        n if n == LeftMiddleHalf | LeftMiddle | LeftRing | LeftLittleEflat | RightPointer | RightMiddle | RightRing =>
            Some(Pitch::new(5, PitchName::E, Accidental::Flat)),
        // E5
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing | RightPointer | RightMiddle =>
            Some(Pitch::new(5, PitchName::E, Accidental::Natural)),
        // F5
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing | RightPointer | RightMiddle | RightRingF =>
            Some(Pitch::new(5, PitchName::F, Accidental::Natural)),
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing | LeftLittleF | RightPointer | RightMiddle =>
            Some(Pitch::new(5, PitchName::F, Accidental::Natural)),
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing | RightPointer | RightRing =>
            Some(Pitch::new(5, PitchName::F, Accidental::Natural)),
        // F#5
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing | RightPointer =>
            Some(Pitch::new(5, PitchName::F, Accidental::Sharp)),
        //// F#5 trill
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing | LeftLittleGsharp | RightPointer =>
            Some(Pitch::new(5, PitchName::F, Accidental::Sharp)),
        // G5
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing =>
            Some(Pitch::new(5, PitchName::G, Accidental::Natural)),
        //// G5 trill
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing | RightMiddle | RightRingF =>
            Some(Pitch::new(5, PitchName::G, Accidental::Natural)),
        // G#5
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing | LeftLittleGsharp =>
            Some(Pitch::new(5, PitchName::G, Accidental::Sharp)),
        n if n == LeftThumb81 | LeftPointer | LeftMiddle | LeftRing | RightPointerGsharp =>
            Some(Pitch::new(5, PitchName::G, Accidental::Sharp)),
        // A5
        n if n == LeftThumb81 | LeftPointer82 | LeftPointer | LeftMiddle =>
            Some(Pitch::new(5, PitchName::A, Accidental::Natural)),
        n if n == LeftPointer82 | LeftPointer | LeftMiddle =>
            Some(Pitch::new(5, PitchName::A, Accidental::Natural)),
        // Bb5
        n if n == LeftThumb81 | LeftPointer82 | LeftPointer | LeftMiddle | RightPointer =>
            Some(Pitch::new(5, PitchName::B, Accidental::Flat)),
        n if n == LeftPointer82 | LeftPointer | LeftMiddle | RightPointer =>
            Some(Pitch::new(5, PitchName::B, Accidental::Flat)),
        //// Bb5 trill
        n if n == LeftThumb81 | LeftPointer | LeftRing | LeftLittleGsharp =>
            Some(Pitch::new(5, PitchName::B, Accidental::Flat)),
        n if n == LeftThumb81 | LeftPointer82 | LeftPointer | LeftMiddle | LeftLittleGsharp | RightPointer =>
            Some(Pitch::new(5, PitchName::B, Accidental::Flat)),
        n if n == LeftPointer82 | LeftPointer | LeftMiddle | LeftLittleGsharp | RightPointer =>
            Some(Pitch::new(5, PitchName::B, Accidental::Flat)),
        // B5
        n if n == LeftThumb81 | LeftPointer82 | LeftPointer =>
            Some(Pitch::new(5, PitchName::B, Accidental::Natural)),
        n if n == LeftPointer82 | LeftPointer =>
            Some(Pitch::new(5, PitchName::B, Accidental::Natural)),
        //// B5 trill
        n if n == LeftPointer82 | LeftThumb81 | LeftPointer | LeftLittleGsharp | RightPointer =>
            Some(Pitch::new(5, PitchName::B, Accidental::Natural)),
        n if n == LeftPointer82 | LeftPointer | LeftLittleGsharp | RightPointer =>
            Some(Pitch::new(5, PitchName::B, Accidental::Natural)),
        // C6
        n if n == LeftThumb81 | LeftPointer82 | LeftPointer | RightPointer =>
            Some(Pitch::new(6, PitchName::C, Accidental::Natural)),
        n if n == LeftPointer82 | LeftPointer | RightPointer =>
            Some(Pitch::new(6, PitchName::C, Accidental::Natural)),
        // C#6
        n if n == LeftMiddle | LeftRing | RightPointer | RightLittleC =>
            Some(Pitch::new(6, PitchName::C, Accidental::Sharp)),
        //// C#6 trill
        n if n == LeftThumb81 | LeftPointer82 | LeftPointer | LeftRingTr2 =>
            Some(Pitch::new(6, PitchName::C, Accidental::Sharp)),
        n if n == LeftPointer82 | LeftPointer | LeftRingTr2 =>
            Some(Pitch::new(6, PitchName::C, Accidental::Sharp)),
        n if n == LeftThumb81 | LeftPointer82 | RightPointer =>
            Some(Pitch::new(6, PitchName::C, Accidental::Sharp)),
        n if n == LeftPointer82 | RightPointer =>
            Some(Pitch::new(6, PitchName::C, Accidental::Sharp)),
        // D6
        n if n == LeftMiddleHalf | LeftMiddle | LeftRing | RightLittleC =>
            Some(Pitch::new(6, PitchName::D, Accidental::Natural)),
        n if n == LeftMiddleHalf | LeftMiddle | LeftRing | RightRing | RightLittleC =>
            Some(Pitch::new(6, PitchName::D, Accidental::Natural)),
        //// D6 trill
        n if n == LeftThumb81 | LeftPointer82 | LeftPointer | LeftMiddleTr1 | RightRing =>
            Some(Pitch::new(6, PitchName::D, Accidental::Natural)),
        n if n == LeftPointer82 | LeftPointer | LeftMiddleTr1 | RightRing =>
            Some(Pitch::new(6, PitchName::D, Accidental::Natural)),
        n if n == LeftThumb81 | LeftPointer82 | LeftPointer | RightRing | RightMiddleTr3 =>
            Some(Pitch::new(6, PitchName::D, Accidental::Natural)),
        n if n == LeftPointer82 | LeftPointer | RightRing | RightMiddleTr3 =>
            Some(Pitch::new(6, PitchName::D, Accidental::Natural)),
        // Eb6
        n if n == LeftMiddleHalf | LeftMiddle | LeftRing | LeftLittleB | RightMiddle | RightRing =>
            Some(Pitch::new(6, PitchName::E, Accidental::Flat)),
        n if n == LeftThumb83 | LeftMiddleHalf | LeftMiddle | LeftRing | RightMiddle | RightRing =>
            Some(Pitch::new(6, PitchName::E, Accidental::Flat)),
        // E6
        n if n == LeftThumb83 | LeftMiddleHalf | LeftMiddle | LeftRing | LeftLittleGsharp | RightMiddle | RightRing | RightLittleEflat =>
            Some(Pitch::new(6, PitchName::E, Accidental::Natural)),
        n if n == LeftThumb83 | LeftMiddleHalf | LeftMiddle | LeftRing | RightPointerGsharp | RightMiddle | RightRing | RightLittleEflat =>
            Some(Pitch::new(6, PitchName::E, Accidental::Natural)),
        n if n == LeftThumb83 | LeftMiddleHalf | LeftMiddle | LeftRing | LeftLittleGsharp | LeftLittleEflat | RightMiddle | RightRing =>
            Some(Pitch::new(6, PitchName::E, Accidental::Natural)),
        // F6
        n if n == LeftThumb83 | LeftMiddleHalf | LeftMiddle | LeftLittleGsharp | RightMiddle | RightRing | RightLittleEflat =>
            Some(Pitch::new(6, PitchName::F, Accidental::Natural)),
        n if n == LeftThumb83 | LeftMiddleHalf | LeftMiddle | RightPointerGsharp | RightMiddle | RightRing | RightLittleEflat =>
            Some(Pitch::new(6, PitchName::F, Accidental::Natural)),
        n if n == LeftThumb83 | LeftMiddleHalf | LeftMiddle | LeftLittleGsharp | LeftLittleEflat | RightMiddle | RightRing =>
            Some(Pitch::new(6, PitchName::F, Accidental::Natural)),
        // F#6
        n if n == LeftThumb83 | LeftPointer | LeftMiddle | RightPointer | RightLittleC =>
            Some(Pitch::new(6, PitchName::F, Accidental::Sharp)),
        n if n == LeftThumb83 | LeftPointer | LeftLittleGsharp | RightMiddle | RightRing | RightLittleEflat =>
            Some(Pitch::new(6, PitchName::F, Accidental::Sharp)),
        n if n == LeftThumb83 | LeftPointer | LeftLittleGsharp | LeftLittleEflat | RightMiddle | RightRing =>
            Some(Pitch::new(6, PitchName::F, Accidental::Sharp)),
        // G6
        n if n == LeftThumb83 | LeftPointer | LeftRing | RightPointer =>
            Some(Pitch::new(6, PitchName::G, Accidental::Natural)),
        n if n == LeftThumb83 | LeftPointer | LeftLittleGsharp | RightPointer =>
            Some(Pitch::new(6, PitchName::G, Accidental::Natural)),

        _ => None,
    }
}
