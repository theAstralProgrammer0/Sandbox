#!/usr/bin/python3
class P:

    def __init__(self, value):
        self.value = value

    @property
    def value(self):
        return self.__value

    @value.setter
    def value(self, value):
        if value < 0:
            self.__value = 0
        elif value > 1000:
            self.__value = 1000
        else:
            self.__value = value


print(P(145784758000).value)
