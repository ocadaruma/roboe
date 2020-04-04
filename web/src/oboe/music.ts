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

  format(): string {
    let accidental;
    switch (this.accidental) {
      case Accidental.DoubleFlat:
        accidental = '𝄫';
        break;
      case Accidental.Flat:
        accidental = '♭';
        break;
      case Accidental.Natural:
        accidental = '';
        break;
      case Accidental.Sharp:
        accidental = '♯';
        break;
      case Accidental.DoubleSharp:
        accidental = '𝄪';
        break;
      default:
        accidental = '';
        break;
    }

    return `${PitchName[this.pitchName]}${accidental}${this.octave}`;
  }
}

export const MIDDLE_C = new Pitch(4, PitchName.C, Accidental.Natural);
