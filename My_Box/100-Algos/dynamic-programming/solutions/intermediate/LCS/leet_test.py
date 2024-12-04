import json
from leet_lcs import Solution
from typing import List


print("TEST CASES FOR LONGEST COMMON SUBSEQUENCE PROBLEM")
print("")
with open("test.json", "r") as file:
    objs = json.load(file)

for obj in objs:
    s1 = obj["string1"]
    s2 = obj["string2"]
    exp = obj["expected"]
    if not exp:
        exp = None

    lcs = Solution().LCS(s1, s2)
    if not lcs:
        lcs = None

    print("---")
    print("")
    print("Sequence [1]: {}".format(s1))
    print("Sequence [2]: {}".format(s2))
    print("")
    print("Expected LCS {}".format(exp))
    print("Obtained LCS {}".format(lcs))
    print("")
    print("Status -> " + "PASS" if lcs == exp else "Status -> " + "FAIL")
    print("")
