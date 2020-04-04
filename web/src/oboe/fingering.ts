import {
  Pitch, PitchName, Accidental, MIDDLE_C,
} from '@/oboe/music';

export enum Key {
  RightLittleEflat   = 1 << 0,
  RightLittleCsharp  = 1 << 1,
  RightLittleC       = 1 << 2,
  RightRing          = 1 << 3,
  RightRingF         = 1 << 4,
  RightMiddle        = 1 << 5,
  RightMiddleTr3     = 1 << 6,
  RightPointer       = 1 << 7,
  RightPointerGsharp = 1 << 8,

  LeftLittleF        = 1 << 9,
  LeftLittleBflat    = 1 << 10,
  LeftLittleB        = 1 << 11,
  LeftLittleEflat    = 1 << 12,
  LeftLittleGsharp   = 1 << 13,
  LeftRing           = 1 << 14,
  LeftRingTr2        = 1 << 15,
  LeftMiddle         = 1 << 16,
  LeftMiddleTr1      = 1 << 17,
  LeftPointer        = 1 << 18,
  LeftPointerHalf    = 1 << 19,
  LeftPointer82      = 1 << 20,
  LeftThumb81        = 1 << 21,
  LeftThumb83        = 1 << 22,
}

export class Fingering {
  flags: number;

  constructor(flags: number) {
    this.flags = flags;
  }

  /* eslint max-len: 0 */
  pitch(): Pitch | undefined {
    let retVal;

    switch (this.flags) {
      // Bb3
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleBflat | Key.RightPointer | Key.RightMiddle | Key.RightRing | Key.RightLittleC:
        retVal = new Pitch(3, PitchName.B, Accidental.Flat);
        break;
      // B3
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleB | Key.RightPointer | Key.RightMiddle | Key.RightRing | Key.RightLittleC:
        retVal = new Pitch(3, PitchName.B, Accidental.Natural);
        break;
      // C4
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle | Key.RightRing | Key.RightLittleC:
        retVal = MIDDLE_C;
        break;
      // C#4
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle | Key.RightRing | Key.RightLittleCsharp:
        retVal = new Pitch(4, PitchName.C, Accidental.Sharp);
        break;
      // // C#4 trill
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleEflat | Key.RightPointer | Key.RightMiddle | Key.RightRing | Key.RightLittleCsharp:
        retVal = new Pitch(4, PitchName.C, Accidental.Sharp);
        break;
      // D4
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle | Key.RightRing:
        retVal = new Pitch(4, PitchName.D, Accidental.Natural);
        break;
      // Eb4
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle | Key.RightRing | Key.RightLittleEflat:
        retVal = new Pitch(4, PitchName.E, Accidental.Flat);
        break;
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleEflat | Key.RightPointer | Key.RightMiddle | Key.RightRing:
        retVal = new Pitch(4, PitchName.E, Accidental.Flat);
        break;
      // E4
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle:
        retVal = new Pitch(4, PitchName.E, Accidental.Natural);
        break;
      // F4
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle | Key.RightRingF:
        retVal = new Pitch(4, PitchName.F, Accidental.Natural);
        break;
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleF | Key.RightPointer | Key.RightMiddle:
        retVal = new Pitch(4, PitchName.F, Accidental.Natural);
        break;
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightRing:
        retVal = new Pitch(4, PitchName.F, Accidental.Natural);
        break;
      // F#4
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer:
        retVal = new Pitch(4, PitchName.F, Accidental.Sharp);
        break;
      // // F#4 trill
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleGsharp | Key.RightPointer:
        retVal = new Pitch(4, PitchName.F, Accidental.Sharp);
        break;
      // G4
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing:
        retVal = new Pitch(4, PitchName.G, Accidental.Natural);
        break;
      // // G4 trill
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightMiddle | Key.RightRingF:
        retVal = new Pitch(4, PitchName.G, Accidental.Natural);
        break;
      // G#4
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleGsharp:
        retVal = new Pitch(4, PitchName.G, Accidental.Sharp);
        break;
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointerGsharp:
        retVal = new Pitch(4, PitchName.G, Accidental.Sharp);
        break;
      // A4
      case Key.LeftPointer | Key.LeftMiddle:
        retVal = new Pitch(4, PitchName.A, Accidental.Natural);
        break;
      // Bb4
      case Key.LeftPointer | Key.LeftMiddle | Key.RightPointer:
        retVal = new Pitch(4, PitchName.B, Accidental.Flat);
        break;
      // // Bb4 trill
      case Key.LeftPointer | Key.LeftRing | Key.LeftLittleGsharp:
        retVal = new Pitch(4, PitchName.B, Accidental.Flat);
        break;
      case Key.LeftPointer | Key.LeftMiddle | Key.LeftLittleGsharp | Key.RightPointer:
        retVal = new Pitch(4, PitchName.B, Accidental.Flat);
        break;
      // B4
      case Key.LeftPointer:
        retVal = new Pitch(4, PitchName.B, Accidental.Natural);
        break;
      // // B4 trill
      case Key.LeftPointer | Key.LeftLittleGsharp | Key.RightPointer:
        retVal = new Pitch(4, PitchName.B, Accidental.Natural);
        break;
      // C5
      case Key.LeftPointer | Key.RightPointer:
        retVal = new Pitch(5, PitchName.C, Accidental.Natural);
        break;
      // C#5
      case Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle | Key.RightRing | Key.RightLittleCsharp:
        retVal = new Pitch(5, PitchName.C, Accidental.Sharp);
        break;
      // // C#5 trill
      case Key.LeftPointer | Key.LeftRingTr2:
        retVal = new Pitch(5, PitchName.C, Accidental.Sharp);
        break;
      case Key.RightPointer:
        retVal = new Pitch(5, PitchName.C, Accidental.Sharp);
        break;
      case Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleEflat | Key.RightPointer | Key.RightMiddle | Key.RightRing | Key.RightLittleCsharp:
        retVal = new Pitch(5, PitchName.C, Accidental.Sharp);
        break;
      // D5
      case Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle | Key.RightRing:
        retVal = new Pitch(5, PitchName.D, Accidental.Natural);
        break;
      // // D5 trill
      case Key.LeftPointer | Key.RightPointer | Key.RightMiddleTr3:
        retVal = new Pitch(5, PitchName.D, Accidental.Natural);
        break;
      // Eb5
      case Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle | Key.RightRing | Key.RightLittleEflat:
        retVal = new Pitch(5, PitchName.E, Accidental.Flat);
        break;
      case Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleEflat | Key.RightPointer | Key.RightMiddle | Key.RightRing:
        retVal = new Pitch(5, PitchName.E, Accidental.Flat);
        break;
      // E5
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle:
        retVal = new Pitch(5, PitchName.E, Accidental.Natural);
        break;
      // F5
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightMiddle | Key.RightRingF:
        retVal = new Pitch(5, PitchName.F, Accidental.Natural);
        break;
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleF | Key.RightPointer | Key.RightMiddle:
        retVal = new Pitch(5, PitchName.F, Accidental.Natural);
        break;
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightRing:
        retVal = new Pitch(5, PitchName.F, Accidental.Natural);
        break;
      // F#5
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointer:
        retVal = new Pitch(5, PitchName.F, Accidental.Sharp);
        break;
      // // F#5 trill
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleGsharp | Key.RightPointer:
        retVal = new Pitch(5, PitchName.F, Accidental.Sharp);
        break;
      // G5
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing:
        retVal = new Pitch(5, PitchName.G, Accidental.Natural);
        break;
      // // G5 trill
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightMiddle | Key.RightRingF:
        retVal = new Pitch(5, PitchName.G, Accidental.Natural);
        break;
      // G#5
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleGsharp:
        retVal = new Pitch(5, PitchName.G, Accidental.Sharp);
        break;
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftMiddle | Key.LeftRing | Key.RightPointerGsharp:
        retVal = new Pitch(5, PitchName.G, Accidental.Sharp);
        break;
      // A5
      case Key.LeftThumb81 | Key.LeftPointer82 | Key.LeftPointer | Key.LeftMiddle:
        retVal = new Pitch(5, PitchName.A, Accidental.Natural);
        break;
      case Key.LeftPointer82 | Key.LeftPointer | Key.LeftMiddle:
        retVal = new Pitch(5, PitchName.A, Accidental.Natural);
        break;
      // Bb5
      case Key.LeftThumb81 | Key.LeftPointer82 | Key.LeftPointer | Key.LeftMiddle | Key.RightPointer:
        retVal = new Pitch(5, PitchName.B, Accidental.Flat);
        break;
      case Key.LeftPointer82 | Key.LeftPointer | Key.LeftMiddle | Key.RightPointer:
        retVal = new Pitch(5, PitchName.B, Accidental.Flat);
        break;
      // // Bb5 trill
      case Key.LeftThumb81 | Key.LeftPointer | Key.LeftRing | Key.LeftLittleGsharp:
        retVal = new Pitch(5, PitchName.B, Accidental.Flat);
        break;
      case Key.LeftThumb81 | Key.LeftPointer82 | Key.LeftPointer | Key.LeftMiddle | Key.LeftLittleGsharp | Key.RightPointer:
        retVal = new Pitch(5, PitchName.B, Accidental.Flat);
        break;
      case Key.LeftPointer82 | Key.LeftPointer | Key.LeftMiddle | Key.LeftLittleGsharp | Key.RightPointer:
        retVal = new Pitch(5, PitchName.B, Accidental.Flat);
        break;
      // B5
      case Key.LeftThumb81 | Key.LeftPointer82 | Key.LeftPointer:
        retVal = new Pitch(5, PitchName.B, Accidental.Natural);
        break;
      case Key.LeftPointer82 | Key.LeftPointer:
        retVal = new Pitch(5, PitchName.B, Accidental.Natural);
        break;
      // // B5 trill
      case Key.LeftPointer82 | Key.LeftThumb81 | Key.LeftPointer | Key.LeftLittleGsharp | Key.RightPointer:
        retVal = new Pitch(5, PitchName.B, Accidental.Natural);
        break;
      case Key.LeftPointer82 | Key.LeftPointer | Key.LeftLittleGsharp | Key.RightPointer:
        retVal = new Pitch(5, PitchName.B, Accidental.Natural);
        break;
      // C6
      case Key.LeftThumb81 | Key.LeftPointer82 | Key.LeftPointer | Key.RightPointer:
        retVal = new Pitch(6, PitchName.C, Accidental.Natural);
        break;
      case Key.LeftPointer82 | Key.LeftPointer | Key.RightPointer:
        retVal = new Pitch(6, PitchName.C, Accidental.Natural);
        break;
      // C#6
      case Key.LeftMiddle | Key.LeftRing | Key.RightPointer | Key.RightLittleC:
        retVal = new Pitch(6, PitchName.C, Accidental.Sharp);
        break;
      // // C#6 trill
      case Key.LeftThumb81 | Key.LeftPointer82 | Key.LeftPointer | Key.LeftRingTr2:
        retVal = new Pitch(6, PitchName.C, Accidental.Sharp);
        break;
      case Key.LeftPointer82 | Key.LeftPointer | Key.LeftRingTr2:
        retVal = new Pitch(6, PitchName.C, Accidental.Sharp);
        break;
      case Key.LeftThumb81 | Key.LeftPointer82 | Key.RightPointer:
        retVal = new Pitch(6, PitchName.C, Accidental.Sharp);
        break;
      case Key.LeftPointer82 | Key.RightPointer:
        retVal = new Pitch(6, PitchName.C, Accidental.Sharp);
        break;
      // D6
      case Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.RightLittleC:
        retVal = new Pitch(6, PitchName.D, Accidental.Natural);
        break;
      case Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.RightRing | Key.RightLittleC:
        retVal = new Pitch(6, PitchName.D, Accidental.Natural);
        break;
      // // D6 trill
      case Key.LeftThumb81 | Key.LeftPointer82 | Key.LeftPointer | Key.LeftMiddleTr1 | Key.RightRing:
        retVal = new Pitch(6, PitchName.D, Accidental.Natural);
        break;
      case Key.LeftPointer82 | Key.LeftPointer | Key.LeftMiddleTr1 | Key.RightRing:
        retVal = new Pitch(6, PitchName.D, Accidental.Natural);
        break;
      case Key.LeftThumb81 | Key.LeftPointer82 | Key.LeftPointer | Key.RightRing | Key.RightMiddleTr3:
        retVal = new Pitch(6, PitchName.D, Accidental.Natural);
        break;
      case Key.LeftPointer82 | Key.LeftPointer | Key.RightRing | Key.RightMiddleTr3:
        retVal = new Pitch(6, PitchName.D, Accidental.Natural);
        break;
      // Eb6
      case Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleB | Key.RightMiddle | Key.RightRing:
        retVal = new Pitch(6, PitchName.E, Accidental.Flat);
        break;
      case Key.LeftThumb83 | Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.RightMiddle | Key.RightRing:
        retVal = new Pitch(6, PitchName.E, Accidental.Flat);
        break;
      // E6
      case Key.LeftThumb83 | Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleGsharp | Key.RightMiddle | Key.RightRing | Key.RightLittleEflat:
        retVal = new Pitch(6, PitchName.E, Accidental.Natural);
        break;
      case Key.LeftThumb83 | Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.RightPointerGsharp | Key.RightMiddle | Key.RightRing | Key.RightLittleEflat:
        retVal = new Pitch(6, PitchName.E, Accidental.Natural);
        break;
      case Key.LeftThumb83 | Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftRing | Key.LeftLittleGsharp | Key.LeftLittleEflat | Key.RightMiddle | Key.RightRing:
        retVal = new Pitch(6, PitchName.E, Accidental.Natural);
        break;
      // F6
      case Key.LeftThumb83 | Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftLittleGsharp | Key.RightMiddle | Key.RightRing | Key.RightLittleEflat:
        retVal = new Pitch(6, PitchName.F, Accidental.Natural);
        break;
      case Key.LeftThumb83 | Key.LeftPointerHalf | Key.LeftMiddle | Key.RightPointerGsharp | Key.RightMiddle | Key.RightRing | Key.RightLittleEflat:
        retVal = new Pitch(6, PitchName.F, Accidental.Natural);
        break;
      case Key.LeftThumb83 | Key.LeftPointerHalf | Key.LeftMiddle | Key.LeftLittleGsharp | Key.LeftLittleEflat | Key.RightMiddle | Key.RightRing:
        retVal = new Pitch(6, PitchName.F, Accidental.Natural);
        break;
      // F#6
      case Key.LeftThumb83 | Key.LeftPointer | Key.LeftMiddle | Key.RightPointer | Key.RightLittleC:
        retVal = new Pitch(6, PitchName.F, Accidental.Sharp);
        break;
      case Key.LeftThumb83 | Key.LeftPointer | Key.LeftLittleGsharp | Key.RightMiddle | Key.RightRing | Key.RightLittleEflat:
        retVal = new Pitch(6, PitchName.F, Accidental.Sharp);
        break;
      case Key.LeftThumb83 | Key.LeftPointer | Key.LeftLittleGsharp | Key.LeftLittleEflat | Key.RightMiddle | Key.RightRing:
        retVal = new Pitch(6, PitchName.F, Accidental.Sharp);
        break;
      // G6
      case Key.LeftThumb83 | Key.LeftPointer | Key.LeftRing | Key.RightPointer:
        retVal = new Pitch(6, PitchName.G, Accidental.Natural);
        break;
      case Key.LeftThumb83 | Key.LeftPointer | Key.LeftLittleGsharp | Key.RightPointer:
        retVal = new Pitch(6, PitchName.G, Accidental.Natural);
        break;
      default:
        retVal = undefined;
        break;
    }

    return retVal;
  }
}
