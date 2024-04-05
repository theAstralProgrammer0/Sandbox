#!/usr/bin/env python3
"""This module is used to calculate the BMI of the user
"""


class BmiCalc():
    """This function finds the BMI of a user
            Args:
                (no args)
    """
    units_w = ("kg", "lb")
    units_h = ("m", "ft", "cm", "in")

    def welcome():
        """Hi there! I'm Beemo. I'm here to help calculate your BMI
        """
        print("Welcome! I'm your personal BMI calculator")
        name = input("What's your name? >> ")
        print("Nice to meet you {}\nMy job is to calculate your BMI\nLet's \
               begin!".format(name))

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
                if (unit_w not in BmiCalc.units_w):
                    raise TypeError
        except Exception as e:
            if (e.__class__.__name__ == "ValueError"):
                print("I need positive numbers to calculate your BMI. \
                      Try again")
                BmiCalc.get_weight()
            elif (e.__class__.__name__ == "TypeError"):
                print("This unit is not valid!")
                print("These are your options\n{}".format(BmiCalc.units_w))
                BmiCalc.get_weight()
        return (w, unit_w)

    def get_height():
        try:
            h = float(input("Your height is? >> "))
            if (h < 0):
                raise ValueError
            else:
                unit_h = input("What's the unit? >> ")
                if (unit_h not in BmiCalc.units_h):
                    raise TypeError
        except Exception as e:
            if (e.__class__.__name__ == "ValueError"):
                print("I need positive numbers to calculate your BMI. \
                       Try again")
                BmiCalc.get_height()
            elif (e.__class__.__name__ == "TypeError"):
                print("This unit is not valid!")
                print("These are your options\n{}".format(BmiCalc.units_h))
                BmiCalc.get_height()
        finally:
            return (h, unit_h)

    def bmi():
        weight = BmiCalc.get_weight()
        height = BmiCalc.get_height()
        val = int(weight[0] // (height[0] ** 2))
        unit = "{}/{}sq.".format(weight[1], height[1])
        print("Your results are in!\nYour BMI is:\n{}{}".format(val, unit))


if __name__ == "__main__":
    BmiCalc.welcome()
    BmiCalc.bmi()
