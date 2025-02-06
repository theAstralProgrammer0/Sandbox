import { defineConfig } from 'vite'; // Import the defineConfig function from vite

import vue from '@vitejs/plugin-vue'; // Import the Vue plugin for vite


// https://vite.dev/config/
export default defineConfig({ // Define the Vite configuration
  plugins: [vue()], // Use the Vue plugin
});
