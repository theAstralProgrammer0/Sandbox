<template>
  <div>
    <button @click="increment">+</button>
    <button @click="decrement">-</button>
    <button @click="reset">Reset</button>
  </div>
</template>

<script lang="ts">
import { defineComponent, Emit } from 'vue';

export default defineComponent({
  name: "CounterButtons",
  emits: ['increment', 'decrement', 'reset'],
  setup(_, { emit }) => {
    const increment = () => emit('increment');
    const decrement = () => emit('decrement');
    const reset = () => emit('reset');

    return { increment, decrement, reset };
  }
});
</script>

<style scoped>

</style>
