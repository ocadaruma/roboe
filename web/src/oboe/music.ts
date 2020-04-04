export enum PitchName {
  C, D, E, F, G, A, B,
}

export enum Accidental {
  DoubleFlat,
  Flat,
  Natural,
  Sharp,
  DoubleSharp,
}

export class Pitch {
  octave: number;
  pitchName: PitchName;
  accidental: Accidental;

  constructor(octave: number, pitchName: PitchName, accidental: Accidental) {
    this.octave = octave;
    this.pitchName = pitchName;
    this.accidental = accidental;
  }
}

export const MIDDLE_C = new Pitch(4, PitchName.C, Accidental.Natural);
