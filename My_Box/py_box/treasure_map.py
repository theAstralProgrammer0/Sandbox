#!/usr/bin/env python3
"""This module gets positions from the user and marks that with an 'X'"""

import shlex


def t_map():
    coords = input("Enter the position of the treasure. Format: (3, 2)")

    lexer = shlex.shlex(coords)
    lexer.whitespace += ", "
    lexer.wordchar += "()"

    c_args = list(lexer)

    print(c_args)


if __name__ == "__main__":
    t_map()


