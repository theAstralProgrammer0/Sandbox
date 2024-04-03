#!/usr/bin/env python3
"""This module is used to calculate the BMI of the user
"""


def BmiCalc():
    units_disp = 0
    units = ("kg", "lb", "g", "mg", "pg", "ton", "t", "Gt", "Mt", "oz", "ng")

    def welcome():
        """Hi there! I'm Beemo. I'm here to help calculate your BMI
        """
        print("Welcome! I'm your personal BMI calculator")
        name = input("What's your name? >> ")
        print("Nice to meet you {}\n
               My job is to calculate your BMI\n
               Let's begin!".format(name))


    def is_pos_num(dig_str=None):
        if not dig_str:
            return (False)
        else:
            if type(eval(dig_str)) is not int or eval(dig_str) < 0:
                return (False)
            return (True)

    def get_weight():
        try:
            w = int(input("Your weight is? >> "))
            if (w < 0):
                raise ValueError
            else:
                unit_w = input("What's the unit? >> ")
                if (unit_w not in units):
                    raise TypeError
        except Exception as e:
            if (e.__class__.__name__ == "ValueError"):
                print("I need positive numbers to calculate your BMI. Try again")
            elif (e.__class__.__name__ == "TypeError"):
                print("This unit is not valid!")
                if not units_disp:
                    print(units)
                    units_disp += 1
            get_weight()
        else:
            return (w, units_w)
                

    def get_height():



    def bmi():
        weight = int(input("Enter your weight: "))
        height = float(input("Enter your height: "))
        return (weight // (height ** 2))


if __name__ == "__main__":
    bmi()
