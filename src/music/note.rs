pub const MIDDLE_C: Pitch = Pitch {
    octave: 4,
    pitch_name: PitchName::C,
    accidental: Accidental::Natural,
};

pub enum PitchName {
    C, D, E, F, G, A, B
}

pub enum Accidental {
    DoubleFlat = -2,
    Flat = -1,
    Natural = 0,
    Sharp = 1,
    DoubleSharp = 2,
}

pub struct Pitch {
    pub octave: i8,
    pub pitch_name: PitchName,
    pub accidental: Accidental,
}
