def is_safe(board, row, col, n):
    """Check if it's safe to place a queen at board[row][col]."""

    # Check column
    for i in range(row):
        if board[i][col] == 1:
            return False

    # Check upper-left diagonal
    i, j = row - 1, col - 1
    while i >= 0 and j >= 0:
        if board[i][j] == 1:
            return False
        i -= 1
        j -= 1

    # Check upper-right diagonal
    i, j = row - 1, col + 1
    while i >= 0 and j < n:
        if board[i][j] == 1:
            return False
        i -= 1
        j += 1

    return True


def solver(board, row, n, solutions):
    """Find all possible solutions."""
    if row == n:  # Base case: All queens are placed
        # Add a deep copy of the board to solutions
        solutions.append([row[:] for row in board])
        return

    for col in range(n):  # Try placing a queen in each column of the current row
        if is_safe(board, row, col, n):
            board[row][col] = 1  # Place the queen
            solver(board, row + 1, n, solutions)  # Recur to place the next queen
            board[row][col] = 0  # Backtrack (remove the queen)


def rotate_board(board):
    """Rotate the board 90 degrees clockwise."""
    n = len(board)
    return [[board[n - j - 1][i] for j in range(n)] for i in range(n)]


def generate_rotations(solution):
    """Generate all rotations of a given solution."""
    rotations = []
    current = solution
    for _ in range(4):  # Generate 4 rotations (0°, 90°, 180°, 270°)
        current = rotate_board(current)
        if current not in rotations:  # Ensure uniqueness
            rotations.append(current)
    return rotations


def setup_board(n):
    """Create an n x n board filled with 0s."""
    return [[0 for _ in range(n)] for _ in range(n)]


def n_queens_solver(n):
    """Solve the n-queens problem and find all arrangements."""
    board = setup_board(n)
    solutions = []
    solver(board, 0, n, solutions)  # Collect all solutions

    # Generate all rotations for each solution and collect unique ones
    unique_solutions = []
    for solution in solutions:
        for rotated in generate_rotations(solution):
            if rotated not in unique_solutions:
                unique_solutions.append(rotated)

    return unique_solutions


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
    solutions = n_queens_solver(n)
    print(f"Found {len(solutions)} unique solutions:")
    for idx, solution in enumerate(solutions, 1):
        print(f"\nSolution {idx}:")
        for row in solution:
            print(" ".join("Q" if cell == 1 else "." for cell in row))

