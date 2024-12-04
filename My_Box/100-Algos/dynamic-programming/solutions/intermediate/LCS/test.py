import json
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
    with open("test.json", "r") as file:
        objs = json.load(file)

    count: int = 0
    failures: List[dict] = []

    for obj in objs:
        exp = obj["expected"]
        lcs = Solution().LCS(obj["string1"], obj["string2"])
        if not lcs == exp:
            count += 1
            failures.append(obj)
        print("The expected subsequence is: {}".format(exp))
        print("The longest subsequence is: {}".format(lcs))
        print("--------------------------------------------")
    print("Failure count: {} cases".format(count))
    print("Failure cases: {} cases".format(failures), end='\n')
