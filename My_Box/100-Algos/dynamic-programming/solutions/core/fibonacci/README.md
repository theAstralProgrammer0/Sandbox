# Fibonacci Directory

Welcome to the **Fibonacci Directory**, a collection of scripts and modules designed to compute and explore Fibonacci sequences in both Python and TypeScript.

---

## **Contents**

### **Python Files**
1. **`fibonacci.py`**
   - Acts as the main driver script for interactive Fibonacci sequence generation.
   - Features:
     - Uses `leet_fibonacci.Solution` to compute Fibonacci series up to a specific number.
     - Allows user interaction:
       - Press **Y** to generate the next Fibonacci number.
       - Press **X** to exit the program.

2. **`leet_fibonacci.py`**
   - Contains the core logic for computing Fibonacci sequences.
   - Features:
     - Recursive computation of Fibonacci numbers.
     - `fibonacci(n: int) -> List[int]`: Generates a Fibonacci series up to the `n`-th number.

3. **`main.py`**
   - A minimal script demonstrating the usage of `leet_fibonacci.Solution`.
   - Outputs the first 15 numbers of the Fibonacci series.

### **TypeScript Files**
1. **`src/leet_fibonacci.ts`**
   - Implements a generator function for Fibonacci numbers.
   - Features:
     - `fibGenerator`: A generator function that yields Fibonacci numbers one at a time.
     - Uses recursion to calculate Fibonacci numbers.

2. **`src/main.ts`**
   - A demonstration script for `fibGenerator`.
   - Outputs the first 13 Fibonacci numbers to the console.

### **Additional Files**
- **`src/main.js`**: The transpiled JavaScript output of `main.ts`.
- **`tsconfig.json`**: Configuration file for TypeScript compilation.

### **Directories**
- **`__pycache__`**: Contains Python bytecode files for faster execution.
- **`node_modules`**: Contains dependencies for the TypeScript environment.

---

## **Setup and Execution**

### **Python**
1. **Requirements**:
   - Python 3.x
   - Install dependencies (if any) using:
     ```bash
     pip install -r requirements.txt
     ```

2. **Run Interactive Fibonacci Generator**:
   ```bash
   python fibonacci.py
   ```

3. **Run Demo Script**:
   ```bash
   python main.py
   ```

### **TypeScript**
1. **Requirements**:
   - Node.js and npm installed.
   - Install TypeScript globally:
     ```bash
     npm install -g typescript
     ```
   - Install project dependencies:
     ```bash
     npm install
     ```

2. **Compile TypeScript**:
   ```bash
   tsc
   ```

3. **Run JavaScript Output**:
   ```bash
   node src/main.js
   ```

4. **Run TypeScript Directly** (using `ts-node`):
   ```bash
   ts-node src/main.ts
   ```

---

## **Features**
- **Python**:
  - Recursive implementation of Fibonacci sequence computation.
  - Interactive user experience in the terminal.
- **TypeScript**:
  - Generator-based Fibonacci computation.
  - Efficient memory usage with `fibGenerator`.

---

## **Contributing**
Feel free to fork this repository and submit pull requests to improve functionality or add new features.

---

## **License**
This project is open-source and available under the MIT License.
