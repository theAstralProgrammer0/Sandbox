from leet_fibonacci import Solution
from typing import List


if __name__ == "__main__":
    soln = Solution()
    count: int = 0
    ip: str = ""
    fseries: List[int] = []

    while(True):
        fseries = soln.fibonacci(count)
        count += 1
        try:
            ip = input("Press Y for next\nPress X to exit\n\n> ")
            if ip == 'y' or ip == 'Y':
                print("Fibonacci series: {}".format(fseries))
            elif ip == 'x' or ip == 'X':
                print("Thanks for playing...")
                break
        except Exception as e:
            print(f"Some {e.__class__.__name__} error occured")
    print("Bye!")
