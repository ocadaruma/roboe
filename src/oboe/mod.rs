//! A virtual oboe structure

use crate::music::note::Pitch;
use crate::oboe::fingering::*;
use crate::wasm_bindgen::prelude::*;

pub mod fingering;

#[wasm_bindgen]
#[derive(Copy, Clone, Eq, PartialEq)]
pub struct Breath {
    /// 0 means not blowing
    pub velocity: u8,
}

#[wasm_bindgen]
#[derive(Copy, Clone, Eq, PartialEq)]
pub struct Oboe {
    /// Current fingering
    fingers: Key,
    /// Current breath
    breath: Breath,
}

#[wasm_bindgen]
impl Oboe {
    pub fn new() -> Oboe {
        Oboe {
            fingers: EMPTY,
            breath: Breath { velocity: 0, },
        }
    }

    pub fn with_fingers(&self, fingers: Key) -> Oboe {
        Oboe {
            fingers,
            breath: self.breath,
        }
    }

    pub fn with_breath(&self, breath: Breath) -> Oboe {
        Oboe {
            fingers: self.fingers,
            breath,
        }
    }

    pub fn pitch(&self) -> Option<Pitch> {
        key_to_pitch(self.fingers)
    }
}
