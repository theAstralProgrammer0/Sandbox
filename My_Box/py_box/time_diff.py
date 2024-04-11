#!/usr/bin/env python3
"""This module finds the user's death day according to them"""
import shlex
import datetime
import sys
import re
import time

def get_dob():
    """This function gets the date of birth
    """
    print("Welcome! I'm here to calculate the time you have left if you were to die at your desired age")
    ans = input("\n\nShall we proceed? (Y/*) >>> ")
    if ans == 'Y' or ans == 'y':
        dob = input("Awesome!\n\nPlease enter your D.O.B (YYYY/MM/DD) >>> ")
        if re.match(r"^(1[7-9][0-9]{2,2}|20[0-2][0-4])/[0-1]?[1-9]/(([0-2]?[0-9]?)|((30|31)))$", dob):
            print(f"\n\nYou only die once, but you've been living since {dob}...so live!")
            return (dob)
        else:
            print("\n\nValid D.O.B format is: YYYY/MM/DD")
            return (get_dob())
    else:
        print("\n\nBye...")
        sys.exit()

def get_old_age():
    """This function gets the preferred age of death of the user
    """
    time.sleep(1.2)
    try:
        old_age = int(input("\n\nHow old do you want to be when you die? >>> "))
    except Exception:
        print("\n\nEnter only the age number e.g., 90")
        return (get_old_age())
    else:
        ans = input("\n\nAre you sure that's the age you would like to die? (Y/*) >>> ")
        if ans == 'Y' or ans == 'y':
            print("\n\nAlright then! Let's see how much time you've got left")
            return (old_age)
        else:
            ans_1 = input("\n\nDo you want to continue? (Y/*) >>> ")
            if ans_1 == 'Y' or ans_1 == 'y':
                return (get_old_age())
            else:
                sys.exit()

def tokenize(line=None, delim=None):
    """This function tokenizes the date"""
    if (line and delim):
        lexer = shlex.shlex(line)
        lexer.whitespace += delim
        return (list(lexer))
    return (line)

def time_left(future=None, now=None, time_div=None):
    """This function finds the user's time left"""
    if (future and now and time_div):
        future_attr = getattr(future, time_div)
        now_attr = getattr(now, time_div)
        return (now_attr - future_attr)

def time_diff():
    """This function finds a time difference"""
    b_date = get_dob() 
    years = get_old_age()
    args = [int(arg) for arg in tokenize(b_date, '/')]
    b_date_dt = datetime.datetime(args[0], args[1], args[2])


    d_90_y = b_date_dt + datetime.timedelta(years * 365)

    yrs_l = time_left(d_90_y, datetime.datetime.today(), "year")
    mons_l = time_left(d_90_y, datetime.datetime.today(), "month")
    dys_l = time_left(d_90_y, datetime.datetime.today(), "day")
    hrs_l = time_left(d_90_y, datetime.datetime.today(), "hour")
    mins_l = time_left(d_90_y, datetime.datetime.today(), "minute")
    secs_l = time_left(d_90_y, datetime.datetime.today(), "second")
    msecs_l = time_left(d_90_y, datetime.datetime.today(), "microsecond")

    return (yrs_l, mons_l, dys_l, hrs_l, mins_l, secs_l, msecs_l)

def display():
    """This function is the driver and displays the time left for the user"""
    time_dif = time_diff()
    print("You have: ", end="")
    time.sleep(1.65)
    print(f"{time_dif[0]} year(s)\n\n")
    time.sleep(1.65)
    print(f"{time_dif[1]} month(s)\n\n")
    time.sleep(1.65)
    print(f"{time_dif[0]} days(s)\n\n")
    time.sleep(1.65)
    print(f"{time_dif[0]} minute(s)\n\n")
    time.sleep(1.65)
    print(f"{time_dif[0]} second(s)\n\n")
    time.sleep(1.65)
    print(f"{time_dif[0]} microsecond(s) LEFT TO LIVE. LIVE IT WISELY\n\n")


if __name__ == "__main__":
    display()
