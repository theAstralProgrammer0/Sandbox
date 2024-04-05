#!/usr/bin/env python3
"""This is a minimal pizza ordering app
"""
import sys
import re
import time

def pizza():
    total = 0

    order = input("\nWould you like a 'small', 'medium' or 'large' pizza? >>> ")
    if re.match(r"^small$", order):
        total += 100
        sys.stdout.write("Subtotal: {}".format(total))
        pep = input("\nWould you like some pepperoni on top? >>> ")
        if re.match(r"^(Y|y)(es)?$", pep):
            total += 30
            sys.stdout.write("Subtotal: {}".format(total))
    elif re.match(r"^medium$", order):
        total += 200
        sys.stdout.write("Subtotal: {}".format(total))
        pep = input("\nWould you like some pepperoni on top? >>> ")
        if re.match(r"^(Y|y)(es)?$", pep):
            total += 50
            sys.stdout.write("Subtotal: {}".format(total))
    elif re.match(r"^large$", order):
        total += 300
        sys.stdout.write("Subtotal: {}".format(total))
        pep = input("\nWould you like some pepperoni on top? >>> ")
        if re.match(r"^(Y|y)(es)?$", pep):
            total += 50
            sys.stdout.write("Subtotal: {}".format(total))
    else:
        sys.stderr.write("\nPlease enter a valid option\nOptions: small | medium | large")
        pizza()

    extra = input("\nWould you like some extra cheese on top? >>> ")
    if re.match(r"^(Y|y)(es)?$", extra):
        total += 20
        sys.stdout.write("Subtotal: {}\n".format(total))
    time.sleep(2)
    sys.stdout.write("\nYour Bill is ==> {}\n".format(total))


if __name__ == "__main__":
    pizza()
