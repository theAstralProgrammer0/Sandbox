# **N-Queens Problem Solver**

The N-Queens Problem is a classic combinatorial problem that involves placing N queens on an N×N chessboard such that no two queens threaten each other. This project implements an efficient backtracking algorithm to solve the problem and provides a visual representation of the solutions.

---

## **Features**
- Solve the N-Queens problem for any given value of N.
- Visualize all possible solutions using a grid representation.
- Interactive input to customize the chessboard size.
- Export solutions as text or images (optional feature).

---

## **Getting Started**

### **Prerequisites**
- Python 3.7 or later
- Required libraries:
  - `numpy` (for grid handling)
  - `matplotlib` (for visualization)

To install dependencies, run:
```bash
pip install numpy matplotlib
```

---

### **Installation**
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/n-queens-solver.git
   cd n-queens-solver
   ```
2. Run the program:
   ```bash
   python n_queens.py
   ```

---

## **How It Works**

The backtracking algorithm systematically places queens on the chessboard, ensuring:
1. No two queens are in the same row or column.
2. No two queens are on the same diagonal.

### **Steps:**
1. Start placing queens row by row.
2. If placing a queen in a row violates the constraints, backtrack and try the next possible position.
3. Repeat until all queens are placed or all possibilities are exhausted.

---

## **Usage**

### **Command-Line Interface (CLI)**
Run the program with:
```bash
python n_queens.py
```
- Enter the board size (N) when prompted.
- View solutions printed to the console.

### **Graphical Visualization**
To visualize solutions:
1. Ensure `matplotlib` is installed.
2. Run the program and specify `--visualize`:
   ```bash
   python n_queens.py --visualize
   ```

---

## **Example Output**

### **Console Output**
For `N = 4`, one solution:
```
. Q . .
. . . Q
Q . . .
. . Q .
```

### **Visualization**
![N-Queens Solution Visualization](visuals/example_output.png)

---

## **Future Enhancements**
- Add a web-based interface for solution visualization.
- Optimize the algorithm for larger N values using bitmasking.
- Include animations for the backtracking process.

---

## **Contributing**
Contributions are welcome! Feel free to fork the project and submit pull requests.

1. Fork the repository.
2. Create a feature branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -m "Add feature"`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

---

## **License**
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## **Contact**
For questions or feedback, reach out to [theastralprogrammer0@outlook.com].

---
