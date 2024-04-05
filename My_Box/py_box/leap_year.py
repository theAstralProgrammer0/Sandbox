#!/usr/bin/env python3

import sys
import time

def is_leap_year():
    time.sleep(2)
    print("\nWelcome! I'm a leap year checker. To exit at any time, Enter q\n\n")
    try:
        time.sleep(2)
        year = input("Enter a year ti see if it is a leap year or not >>> ")
        if year == 'q' or year == 'Q':
            sys.exit()
        else:
            year = int(year)
    except Exception:
        time.sleep(2)
        sys.stderr.write("\nPlease enter a valid year")
        is_leap_year()
    else:
        if year % 4:
            if not year % 100:
                print("\nnot divisible by 100 check!!!!!!!!!!!!!!!!!\n")
                if not year % 400:
                    time.sleep(2)
                    sys.stdout.write("\nThis is a leap year\n")
                else:
                    time.sleep(2)
                    sys.stdout.write("\nThis is not a leap year\n")
            else:
                time.sleep(2)
                sys.stdout.write("\nThis is not a leap year\n")
        else:
            time.sleep(2)
            sys.stdout.write("\nThis is a leap year\n")

    is_leap_year()


if __name__ == "__main__":
    is_leap_year()
