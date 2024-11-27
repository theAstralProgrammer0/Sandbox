"""This module defines a class called Solution"""


from typing import List


class Solution:
    def solveNQueens(self, n: int) -> List[List[int]]:
        board = self.setup_board()
