from typing import List


class Solution:
    def LCS(self, s1: str, s2: str) -> List[str]:
        i: int
        j: int
        k: int
        l1: int
        l2: int
        temp: str = ""
        sseq: str = ""
        lcs: str = ""
        sseqs: List[str] = []

        if len(s1) > len(s2):
            temp = s1
            s1 = s2
            s2 = temp
        
        l1 = len(s1)
        l2 = len(s2)
        
        k = 0

        while k < l1:
            i = k
            j = 0
            while i < l1 and j < l2:
                if s1[i] == s2[j]:
                    sseq += s1[i]
                    i += 1
                j += 1
                if sseq and (i == l1 or j == l2):
                    sseqs.append(sseq)
            k += 1
            sseq = ""

        print(sseqs)

        try:
            lcs = max(sseqs, key=len)
        except ValueError:
            lcs = ""
        return lcs


if __name__ == "__main__":
    s1 = input("Enter the first string: ")
    s2 = input("Enter the second string: ")

    lcs = Solution().LCS(s1, s2)
    print("The longest subsequence is: {}".format(lcs))
