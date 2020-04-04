//! roboe libs

pub mod audio;
pub mod input;
pub mod music;
pub mod oboe;

extern crate wasm_bindgen;

#[cfg(feature = "wee_alloc")]
#[global_allocator]
static ALLOC: wee_alloc::WeeAlloc = wee_alloc::WeeAlloc::INIT;
