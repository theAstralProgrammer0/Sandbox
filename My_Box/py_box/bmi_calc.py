#!/usr/bin/env python3
"""This module is used to calculate the BMI of the user
"""


class BmiCalc(BaseModel):

    weight = 0
    w_unit = ""
    height = 0
    h_unit = ""

    units = ("kg", "lb", "g", "mg", "pg", "ton", "t", "Gt", "Mt", "oz", "ng")

    def welcome():
        """Hi there! I'm Beemo. I'm here to help calculate your BMI
        """
        print("Welcome! I'm your personal BMI calculator")
        name = input("What's your name? >> ")
        print("Nice to meet you {}\n
               My job is to calculate your BMI\n".format(name))


    def get_weight():
        

    def get_height():


    def bmi():
        weight = int(input("Enter your weight: "))
        height = float(input("Enter your height: "))
        return (weight // (height ** 2))


if __name__ == "__main__":
    bmi()
