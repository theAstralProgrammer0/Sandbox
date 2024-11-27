#!/usr/bin/python3

"""This module is used for solving the n-queens problem for any number of
queens"""

def is_safe(board, row, col, n):
    """This function determines if it is safe for a queen to be placed on
    board[row][col]"""

    # check column for attacking queen
    for i in range(row):
        if board[i][col] == 1:
            return 0

    # check upper-left diagonal cells for attacking queen
    i, j = row - 1, col - 1
    while i >= 0 and j >= 0:
        if board[i][j] == 1:
            return 0
        i -= 1
        j -= 1

    # check upper-right diagonal cells for attacking queen
    i, j = row - 1, col + 1
    while i >= 0 and j < n:
        if board[i][j] == 1:
            return 0
        i -= 1
        j += 1

    return 1


def solver(board, row, n):
    if row == n:
        return board

    for col in range(n):
        if is_safe(board, row, col, n):
            board[row][col] = 1
            result = solver(board, row + 1, n)
            if result:
                return result
            else:
                # backtrack ;.
                board[row][col] = 0
    return None

"""
def setup_board(n):
    board = []
    for _ in range(n):
        board.append([0] * n)
    return board
"""

def setup_board(n):
    return [[0 for _ in range(n)] for _ in range(n)]

def n_queens_solver(n):
    board = setup_board(n)
    solution = solver(board, 0, n)
    return solution if solution else "No solution found"


if __name__ == "__main__":
    while True:
        try:
            n = int(input("How many queens? "))
            if n < 4:
                print("Error: Number of queens must be at least 4.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    print("Solving...")
    solution = n_queens_solver(n)
    if isinstance(solution, str):
        print(solution)
    else:
        for row in solution:
            print(" ".join("Q" if cell == 1 else "." for cell in row))
