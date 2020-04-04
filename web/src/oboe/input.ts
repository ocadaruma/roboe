import { Key } from '@/oboe/fingering';

export const DEFAULT_KEY_MAPPING = new Map<string, Key>(Object.entries({
  '0': Key.RightLittleEflat,
  'p': Key.RightLittleCsharp,
  ';': Key.RightLittleC,
  'o': Key.RightRing,
  '9': Key.RightRingF,
  'i': Key.RightMiddle,
  '8': Key.RightMiddleTr3,
  'u': Key.RightPointer,
  '7': Key.RightPointerGsharp,

  '1': Key.LeftLittleGsharp,
  'q': Key.LeftLittleEflat,
  'a': Key.LeftLittleB,
  'z': Key.LeftLittleBflat,
  's': Key.LeftLittleF,
  'w': Key.LeftRing,
  '2': Key.LeftRingTr2,
  'e': Key.LeftMiddle,
  '3': Key.LeftMiddleTr1,
  'r': Key.LeftPointer,
  '4': Key.LeftPointerHalf,
  'f': Key.LeftPointer82,
  'v': Key.LeftThumb81,
  'b': Key.LeftThumb83,
}));
