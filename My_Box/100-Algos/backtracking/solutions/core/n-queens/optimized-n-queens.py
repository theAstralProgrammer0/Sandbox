from typing import List


class Solution:
    def setup_board(self, n: int) -> List[List[int]]:
        return [[0 for _ in range(n)] for _ in range(n)]

    def is_safe(self, board: List[List[int]], row: int, col: int, n: int, solutions: List[List[int]]) -> bool:
        for i in range(n):
            if board[i][col]:
                return False

        i, j = row - 1, col - 1
        while i >= 0 and j >= 0:
            if board[i][j]:
                return False
            i -= 1
            j -= 1

        i, j = row - 1, col + 1
        while i >= 0 and j < n:
            if board[i][j]:
                return False
            i -= 1
            j += 1
        
        return True


    def solver(self, board: List[List[int]], row: int, n: int, solutions: List[List[int]]):
        if row == n:
            solutions.append([r[:] for r in board]) # deep copy of board
            return

        for col in range(n):
            if self.is_safe(board, row, col, n, solutions):
                board[row][col] = 1
                self.solver(board, 1 + row, n, solutions)
                board[row][col] = 0 # backtrack

    def format_board(self, board: List[List[int]]) -> List[str]:
        return ["".join("Q " if c == 1 else ". " for c in r) for r in board]

    
    def n_queens_solver(self, n: int) -> List[List[str]]:
        board = self.setup_board(n)
        solutions = []
        self.solver(board, 0, n, solutions)
        fmtd_solutions = []
        for solution in solutions:
            fmtd_solutions.append(self.format_board(solution))
        return fmtd_solutions


if __name__ == "__main__":
    n = int(input("How many queens? "))
    solutions = Solution().n_queens_solver(n)
    print("There are {} solutions for a {} x {} and {} queens problem".format(len(solutions), n, n, n))

    count = 0
    for solution in solutions:
        count += 1
        print("Solution:{}".format(count))

        for strn in solution:
            print("{}".format(strn))



