use crate::wasm_bindgen::prelude::*;

pub const MIDDLE_C: Pitch = Pitch {
    octave: 4,
    pitch_name: PitchName::C,
    accidental: Accidental::Natural,
};

#[repr(u8)]
#[wasm_bindgen]
#[derive(Copy, Clone, PartialOrd, PartialEq, Debug)]
pub enum PitchName {
    C, D, E, F, G, A, B
}

#[repr(u8)]
#[wasm_bindgen]
#[derive(Copy, Clone, PartialOrd, PartialEq, Debug)]
pub enum Accidental {
    DoubleFlat,
    Flat,
    Natural,
    Sharp,
    DoubleSharp,
}

#[wasm_bindgen]
#[derive(Copy, Clone, PartialOrd, PartialEq, Debug)]
pub struct Pitch {
    pub octave: i8,
    pub pitch_name: PitchName,
    pub accidental: Accidental,
}

#[wasm_bindgen]
impl Pitch {
    #[wasm_bindgen(constructor)]
    pub fn new(octave: i8, pitch_name: PitchName, accidental: Accidental) -> Pitch {
        Pitch {
            octave, pitch_name, accidental,
        }
    }
}
