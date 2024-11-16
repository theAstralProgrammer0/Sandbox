# Permutations Problem

## 0. Project Overview
This directory is part of a larger project focused on building a **Command-Line Interface (CLI) Chess Game**. The chess game requires various AI algorithms, especially for move generation and decision-making. The "Permutations" problem plays a crucial role in exploring possible sequences of moves, particularly in endgame scenarios or when generating potential sequences of chess pieces' movement patterns.

## 1. Algorithm Explanation

### Core Algorithm: Backtracking
The **Permutations** problem is a classic example that utilizes the **backtracking** algorithm. Given an array of numbers, the goal is to generate all possible orderings (permutations) of these elements. This approach is fundamental for exploring every possible combination without missing any, making it an excellent fit for problems like move generation in a chess game.

### Purpose and Application
In the context of the chess game project, the permutations algorithm can be applied to:
- **Generate possible sequences of moves**: In some chess strategies, exploring different orders of moves can help find optimal strategies.
- **Move scheduling**: When determining the order of piece movements, permutations help in evaluating all possible configurations to identify the best option.

By applying backtracking, the algorithm efficiently explores all configurations by building each permutation step by step and backtracking once an invalid or complete configuration is reached.

## 2. Usage Instructions

### Running the Algorithm
The implementation of the permutations problem can be run from the command line. You can pass an array of integers as input to get all possible permutations.

Example usage:

```bash
python permutations.py [1, 2, 3]

