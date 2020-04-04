import { Accidental, Pitch, PitchName } from '@/oboe/music';

const A4_FREQUENCY = 442.0;
const CHROMATIC = 2 ** (1 / 12);

export enum Breath {
  OFF, ON,
}

export class OboeSound {
  private audioContext: AudioContext;
  private oscillator: OscillatorNode;
  private gainNode: GainNode;
  private started = false;

  constructor() {
    this.audioContext = new window.AudioContext();

    const oscillator = this.audioContext.createOscillator();
    const gainNode = this.audioContext.createGain();

    oscillator.connect(gainNode);
    gainNode.connect(this.audioContext.destination);

    gainNode.gain.value = 0;

    this.oscillator = oscillator;
    this.gainNode = gainNode;
  }

  breath(value: Breath) {
    console.log(Breath[value]);
    switch (value) {
      case Breath.OFF:
        this.gainNode.gain.value = 0;
        break;
      case Breath.ON:
        if (!this.started) {
          this.oscillator.start(0);
          this.started = true;
        }
        this.gainNode.gain.value = 0.5;
        break;
      default:
        break;
    }
  }

  pitch(pitch: Pitch) {
    const a4 = new Pitch(4, PitchName.A, Accidental.Natural);
    const offset = pitch.chromaticOffset() - a4.chromaticOffset();

    let freq;
    if (offset < 0) {
      freq = A4_FREQUENCY / (CHROMATIC ** Math.abs(offset));
    } else {
      freq = A4_FREQUENCY * (CHROMATIC ** offset);
    }
    console.log(freq);
    this.oscillator.frequency.value = freq;
  }

  close(): Promise<void> {
    return this.audioContext.close();
  }
}
