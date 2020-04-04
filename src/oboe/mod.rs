//! A virtual oboe structure

use crate::music::note::Pitch;
use crate::oboe::fingering::*;
use crate::wasm_bindgen::prelude::*;

pub mod fingering;

#[wasm_bindgen]
#[derive(Copy, Clone, PartialOrd, PartialEq, Debug)]
pub struct Breath {
    /// 0 means not blowing
    pub velocity: u8,
}

#[wasm_bindgen]
#[derive(Copy, Clone, PartialOrd, PartialEq, Debug)]
pub struct Oboe {
    /// Current fingering
    fingering: Fingering,
    /// Current breath
    breath: Breath,
}

#[wasm_bindgen]
impl Oboe {
    pub fn new() -> Oboe {
        Oboe {
            fingering: Fingering::from_bitflags(0),
            breath: Breath { velocity: 0, },
        }
    }

    pub fn with_fingers(&self, fingering: Fingering) -> Oboe {
        Oboe {
            fingering,
            breath: self.breath,
        }
    }

    pub fn with_breath(&self, breath: Breath) -> Oboe {
        Oboe {
            fingering: self.fingering,
            breath,
        }
    }

    pub fn pitch(&self) -> Option<Pitch> {
        fingering_to_pitch(self.fingering)
    }
}
