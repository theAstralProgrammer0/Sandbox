<template>
  <div class="counter-container">
    <CounterDisplay :count="count">
    <CounterButtons \
      @increment="handleIncrement" \
      @decrement="handleDecrement" \
      @reset="reset" \
      >
  </div>
</template>

<script lang="ts">

</script>

<style scoped>
</style>
