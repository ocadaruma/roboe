import {Breath} from "@/oboe/sound";
<template>
  <div>{{ pitch }}</div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import { Fingering, Key } from '@/oboe/fingering';
import { Breath, OboeSound } from '@/oboe/sound';
import { DEFAULT_KEY_MAPPING } from '@/oboe/input';

@Component
export default class Oboe extends Vue {
  private pitch: string | null = null;
  private fingering = 0;
  private breath = Breath.OFF;
  private oboeSound = new OboeSound();

  private currentKeys = new Set<string>();

  private inputToOboeKey(key: string): Key | undefined {
    return DEFAULT_KEY_MAPPING.get(key);
  }

  private updateSound() {
    const pitch = new Fingering(this.fingering).pitch() || null;

    if (this.breath === Breath.ON && pitch !== null) {
      this.oboeSound.pitch(pitch);
      this.oboeSound.breath(Breath.ON);
      this.pitch = new Fingering(this.fingering).pitch()?.format() || null;
    } else {
      this.oboeSound.breath(Breath.OFF);
      this.pitch = null;
    }
  }

  private keydown(ev: KeyboardEvent): void {
    const { key } = ev;
    if (this.currentKeys.has(key)) {
      return;
    }
    this.currentKeys.add(key);
    console.log(this.currentKeys);

    if (key === ' ') {
      this.breath = Breath.ON;
    } else {
      const oboeKey = this.inputToOboeKey(key);
      if (oboeKey) {
        this.fingering |= oboeKey;
      }
    }

    this.updateSound();
  }

  private keyup(ev: KeyboardEvent): void {
    const { key } = ev;
    this.currentKeys.delete(key);
    console.log(this.currentKeys);

    if (key === ' ') {
      this.breath = Breath.OFF;
    } else {
      const oboeKey = this.inputToOboeKey(key);
      if (oboeKey) {
        this.fingering ^= oboeKey;
      }
    }

    this.updateSound();
  }

  created(): void {
    window.addEventListener('keydown', this.keydown);
    window.addEventListener('keyup', this.keyup);
  }

  beforeDestroy(): void {
    window.removeEventListener('keydown', this.keydown);
    window.removeEventListener('keyup', this.keyup);

    this.oboeSound.close();
  }
}
</script>

<style scoped lang="scss">
h3 {
  margin: 40px 0 0;
}
ul {
  list-style-type: none;
  padding: 0;
}
li {
  display: inline-block;
  margin: 0 10px;
}
a {
  color: #42b983;
}
</style>
