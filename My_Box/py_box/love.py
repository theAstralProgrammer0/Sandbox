#!/usr/bin/env python3
"""This script checks if you and your partner are compatible based on 2 usernames
"""
import time

def get_names():
    print("\nWelcome lovebirds! Let's find out if you and your partner are a love match\n")
    u_1 = input("\nEnter your full name or username >>> ")
    u_2 = input("\nEnter your partner's full name or username >>> ")
    return (u_1, u_2)

def love(): 
    love_score_units = 0
    love_score_tens = 0
    name = get_names()
    names = (name[0] + name[1]).lower()
    for char in names:
        if char in "true":
            love_score_tens += 1
        elif char in "love":
            love_score_units += 1
    if ('0' in name[0] and '0' in name[1]) or ('8' in name[0] and '8' in name[1]):
        love_score_tens += 2

    love_score = int(str(love_score_tens) + str(love_score_units))
    if love_score > 100:
        love_score = 100
    return (love_score)

def display(score, msg):
    print("your love score is ... ", end="")
    time.sleep(0.8)
    print("{}%\n".format(score))
    print(msg)


if __name__ == "__main__":
    msg_70 = "\nYou 2 are a perfect match. He/She is your one true love\n"
    msg_40 = "\nYou 2 are a great match, you both share something special\n"
    msg_10 = "\nYou 2 are not a perfect match, but ok for each other\n"
    msg_0 = "\nYou 2 need to give your selves some space\n"
    msg = "\nYou 2 are not meant to be together\n"
    score = love()
    if 70 <= score <= 100:
        display(score, msg_70)
    elif 40 <= score <= 69:
        display(score, msg_40)
    elif 10 <= score <= 39:
        display(score, msg_10)
    else:
        display(score, msg_0)
