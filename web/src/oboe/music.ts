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

  chromaticOffset(): number {
    let value = 0;
    value += this.octave * 12;

    switch (this.pitchName) {
      case PitchName.C:
        break;
      case PitchName.D:
        value += 2;
        break;
      case PitchName.E:
        value += 4;
        break;
      case PitchName.F:
        value += 5;
        break;
      case PitchName.G:
        value += 7;
        break;
      case PitchName.A:
        value += 9;
        break;
      case PitchName.B:
        value += 11;
        break;
      default:
        break;
    }

    switch (this.accidental) {
      case Accidental.DoubleFlat:
        value -= 2;
        break;
      case Accidental.Flat:
        value -= 1;
        break;
      case Accidental.Natural:
        break;
      case Accidental.Sharp:
        value += 1;
        break;
      case Accidental.DoubleSharp:
        value += 2;
        break;
      default:
        break;
    }

    return value;
  }
}

export const MIDDLE_C = new Pitch(4, PitchName.C, Accidental.Natural);
