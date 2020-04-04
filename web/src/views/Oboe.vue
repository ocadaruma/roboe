<template>
  <div>Hello</div>
</template>

<script lang="ts">
import { Component, Vue } from 'vue-property-decorator';
import { Key, Fingering } from '@/oboe/fingering';

@Component
export default class HelloWorld extends Vue {
  private pitch = '';

  onclick() {
    const pitch = new Fingering(Key.LeftPointer | Key.LeftMiddle).pitch()!;
    this.pitch = `${pitch.octave}, ${pitch.pitchName}, ${pitch.accidental}`;
  }
}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
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
