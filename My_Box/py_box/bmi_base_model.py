#!/usr/bin/env python3
"""This module describes the base model for all classes for the BMI calculator
   app
"""


class BaseModel():
    """This class describes all common attributes in the BMI calculator app
    """
    weight = 0
    height = 0
    units = ("kg", "lb", "g", "mg", "pg", "ton", "t", "Gt", "Mt", "oz", "ng")

    def __init__(self):

