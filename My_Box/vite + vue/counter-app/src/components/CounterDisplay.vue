<template> <!-- Start the template section of the component -->
  <p class="counter-value">{{ count }}</p> <!-- Display the count value -->
</template> <!-- End the template section -->


<script lang="ts"> // Start the script section with TypeScript
import { defineComponent, PropType } from 'vue'; // Import defineComponent and PropType

export default defineComponent({ // Define CounterDisplay component
  name: 'CounterDisplay', // Set the name of the component
  props: { // Define the props of the component
    count: { // Define the count prop
      type: Number as PropType<number>, // Set the type of the count prop to number
      required: true, // Make the count prop required
    },
  },
});
</script>


<style scoped> /* Start the style section with scoped styles
/* Component-specific styles */
.counter-value { /* Style the counter value */
  font-size: 2em; /* Set the font size */
  margin-bottom: 1rem; /* Set the bottom margin */
color: #333; /* Set the text color */
}
</style> <!-- End of style section -->
