#!/usr/bin/env python3
"""This program finds out who's paying among any number of users"""

import random
import time

def get_info():
    print("\nWelcome to PayUp!\nLet's see who's going to pay the bill this time\n")
    names = input("\nEnter all the first names of the people involved separated by a space\n>>> ")
    return (names.split(" "))

def pay():
    names = get_info()
    num = len(names)
    print(f"\nLet's see who pays up out of the {num} of you\n")
    idx = random.randrange(0, num)
    print("\nAnd the 'Winner' is", end="")
    i = 0
    while i != len(range(num)):
        print(".")
        time.sleep(.5)
        i += 1
    print("\n========================{}==========================\n".format(names[idx].upper()))


if __name__ == "__main__":
    pay()
