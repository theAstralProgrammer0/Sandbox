"""This code generates the n-th fibonacci sequence"""


from typing import List


class Solution:
    def solver(self, n: int, sum: int, count: int, solution: List[int]):
        if count == n:
            return

        if count < 2:
            solution.append(1)
            self.solver(n, 1, 1 + count, solution)
        elif count >= 2:
            sum = solution[-2] + solution[-1] 
            solution.append(sum)
            self.solver(n, sum, 1 + count, solution)

    def fibonacci(self, n: int) -> List[int]:
        if n < 1:
            return None
        solution = []
        self.solver(n, 0, 0, solution)
        return solution
