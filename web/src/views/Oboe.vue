<template>
  <div>{{ pitch }}</div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import { Key, Fingering } from '@/oboe/fingering';
import { Pitch } from '@/oboe/music';
import { DEFAULT_KEY_MAPPING } from '@/oboe/input';

enum Breath {
  ON, OFF,
}

@Component
export default class Oboe extends Vue {
  private pitch: string | null = null;
  private fingering = 0;
  private breath = Breath.OFF;

  private currentKeys = new Set<string>();

  private inputToOboeKey(key: string): Key | undefined {
    return DEFAULT_KEY_MAPPING.get(key);
  }

  private keydown(ev: KeyboardEvent): void {
    const { key } = ev;
    if (this.currentKeys.has(key)) {
      return;
    }
    this.currentKeys.add(key);

    if (key === ' ') {
      this.breath = Breath.ON;
    }

    const oboeKey = this.inputToOboeKey(key);
    if (oboeKey) {
      this.fingering |= oboeKey;
      this.pitch = new Fingering(this.fingering).pitch()?.format() || null;
    }
  }

  private keyup(ev: KeyboardEvent): void {
    const { key } = ev;
    this.currentKeys.delete(key);

    if (key === ' ') {
      this.breath = Breath.OFF;
    }

    const oboeKey = this.inputToOboeKey(key);
    if (oboeKey) {
      this.fingering ^= oboeKey;
      this.pitch = new Fingering(this.fingering).pitch()?.format() || null;
    }
  }

  created(): void {
    window.addEventListener('keydown', this.keydown);
    window.addEventListener('keyup', this.keyup);
  }

  beforeDestroy(): void {
    window.removeEventListener('keydown', this.keydown);
    window.removeEventListener('keyup', this.keyup);
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
