from typing import List


class Solution:
    def setup_board(self, s1: str, s2: str) -> List[List[int]]:
        return [[0] * (1 + len(s2)) for _ in range(1 + len(s1))]

    def LCS(self, s1: str, s2: str) -> str:
        # initialization
        i: int = 0
        j: int = 0
        lcs: List[str] = []
        dp: List[List[int]] = []
        
        # get the dp initial board config
        dp = self.setup_board(s1, s2)

        # fill up the board
        for i in range(1, 1 + len(s1)):
            for j in range(1, 1 + len(s2)):
                if s1[i - 1] == s2[j - 1]:
                    dp[i][j] = 1 + dp[i - 1][j - 1]
                else:
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

        # backtrack to obtain useful data {LCS: str, len(LCS): int} 
        i, j = len(s1), len(s2)

        while i > 0 and j > 0:
            if s1[i - 1] == s2[j - 1]:
                lcs.append(s1[i - 1])
                i -= 1
                j -= 1
            elif dp[i - 1][j] > dp[i][j - 1]:
                i -= 1
            else:
                j -= 1

        return ''.join(reversed(lcs))
