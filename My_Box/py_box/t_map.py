#!/usr/bin/env python3
"""This module gets positions from the user and marks that with an 'X'"""

import shlex
import time
import re
import sys


class TMAP():
    def __init__(self):
        self.string = ""
        self.map_list_str = ""
        self.map_list = []

    def msg(self, num):
        if num == 1:
            print("    1. self.create a map [ self.create(<rows>,<cols>) ] -> \
self.create(9,9)\n")
        if num == 2:
            print("    2. bury treasures at a specific coordinate \
[ bury(<row>,<col>) ] -> bury(5,4)\n")
        if num == 3:
            print("    3. move treasures to other coordinates [ move(<src_row>\
,<src_col>)(<dest_row>,<dest_col>) ] -> move(9,0)(2,3)\n")
        if num == 4:
            print("    4. distribute treasures at various locations [ dist(<row_1>\
,<col_1>)[(<row_2>,<col_2>)[(<row_3><col_3>)]]... ] \
-> dist(1,2)(0,9)(6,7)...\n")
        if num == 5:
            print("    5. remove treasure at a specific coodinate [ rem(<row>\
,<col>) ] -> rem(8,8)\n")
        if num == 6:
            print("\nThis is the map. You can bury the treasure anywhere on this\
map\n")
        if num == 7:
            print("\nThese are the available commands.\n")
        if num == 8:
            print("\nThe map is empty. Create a map!\n")
        if num == 9:
            print("\nThe command you have entered is incorrect.\n") 
        if num == 10:
            print("\n\
===============================================\
===============================================\
===============================================\
===============================================\n\
\t\t\t\t\t\t\t\t\t\t\t| Welcome |\n\
===============================================\
===============================================\
===============================================\
===============================================\n")
        if num == 11:
            print("This is a treasure map mini-game where you can:\n")
        if num == 12:
            print("\nBYE.....")
        if num == 13:
            print("No treasure here\nYou have to bury treasures before you can\
 move or distribute them\n")
        if num == 14:
            print("OUT OF BOUND\n")
        if num == 15:
            print("\n===== | MAP CREATED | =====\n")
        if num == 16:
            print("\n===== | MAP NOT CREATED | =====\n")
        if num == 17:
            print("\n+++++ | TREASURE BURIED  | +++++\n")
        if num == 18:
            print("\n+++++ | TREASURE NOT BURIED | +++++\n")
        if num == 19:
            print("\n+-+-+ | TREASURE MOVED | +-+-+\n")
        if num == 20:
            print("\n+-+-+ | TREASURE NOT MOVED | +-+-+\n")
        if num == 21:
            print("\n+-+-+ | TREASURE DISTRIBUTED | +-+-+\n")
        if num == 22:
            print("\n+-+-+ | TREASURE NOT DISTRIBUTED | +-+-+\n")
        if num == 23:
            print("\n----- | TREASURE REMOVED | -----\n")
        if num == 24:
            print("\n----- | TREASURE NOT REMOVED | -----\n")

    def info(self, num, data):
        if num == 1:
            print(f"\nYou have {data[0]} treasures at location {data[1]}\n")
        if num == 2:
            print(f"\nMoving 1 treasure from {data[1]} to destination\n")
        if num == 3:
            print(f"\n1 treasure Received at destination {data[1]}\n")


    def welcome(self):
        #time.sleep(.5)
        self.msg(10)
        #time.sleep(1.5)
        self.msg(11)
        #time.sleep(1.5)
        self.msg(1)
        #time.sleep(2)
        self.msg(2)
        #time.sleep(2)
        self.msg(3)
        #time.sleep(2)
        self.msg(4)
        #time.sleep(2)
        self.msg(5)
        #time.sleep(2)

    def help(self):
        self.msg(7)
        time.sleep(1.5)
        self.msg(1)
        self.msg(2)
        self.msg(3)
        self.msg(4)
        self.msg(5)

    def error_print(self):
        self.msg(9)
        time.sleep(1.5)
        help()

    def print_map(self, c_map):
        if c_map:
            c_map = [row.__str__() for row in c_map]
            self.string = "\n".join(c_map)
            print(self.string)
            print()
        else:
            self.msg(8)

    def argify(self, line=""):
        lexer = shlex.shlex(line)
        lexer.whitespace += "(,)"
        args = list(lexer)
        return (args)

    def create(self, args):
        x, y = int(args[0]), int(args[1])
        j = 0
        while j < y:
            i = 0
            z_l = []
            while i < x:
                z_l.append(0)
                i += 1
            self.map_list.append(z_l) 
            j += 1

        self.print_map(self.map_list)


    def bury(self, args):
        if self.map_list:
            x, y = int(args[0]), int(args[1])
            try:
                self.map_list[y][x] += 1
            except IndexError:
                self.msg(14)
            else:
                self.print_map(self.map_list)
        else:
            self.msg(8)

    def move(self, args):
        x_1, y_1 = int(args[0]), int(args[1]) #src
        x_2, y_2 = int(args[2]), int(args[3]) #dest

        if self.map_list:
            try:
                cell_1 = self.map_list[y_1][x_1]
                cell_2 = self.map_list[y_2][x_2]
            except IndexError:
                self.msg(14)
            else:
                if cell_1:
                    self.info(1, (cell_1, (x_1, y_1)))
                    self.map_list[y_1][x_1] -= 1
                    self.info(2, (cell_1, (x_1, y_1)))
                    self.info(1, (cell_2, (x_2, y_2)))
                    self.map_list[y_2][x_2] += 1
                    self.info(3, (cell_2, (x_2, y_2)))
                else:
                    self.msg(13)
            self.print_map(self.map_list)
        else:
            self.msg(8)

    def dist(self, args):
        i = 2
        while i < len(args):
            self.move(args[0:2] + args[i:i+2])
            i += 2

    def rem(self, args):
        pass


    def get_action(self):
        command = input("What's your action >>> ")
        args = self.argify(command)
        args.pop(0)
        if args:
            if re.match(r"^((c|C)reate|create)", command):
                if re.match(r"^((c|C)reate|create)\([0-9]+,[0-9]+\)$", command):
                    self.msg(15)
                    self.create(args)
                else:
                    self.msg(16)
                    self.msg(1)
            elif re.match(r"^((b|B)ury|BURY)", command):
                if re.match(r"^((b|B)ury|BURY)\([0-9]+,[0-9]+\)$", command):
                    self.msg(17)
                    self.bury(args)
                else:
                    self.msg(18)
                    self.msg(2)
            elif re.match(r"^((m|M)ove|MOVE)", command):
                if re.match(r"^((m|M)ove|MOVE)(\([0-9]+,[0-9]+\)){2,2}$", command):
                    self.msg(19)
                    self.move(args)
                else:
                    self.msg(20)
                    self.msg(3)
            elif re.match(r"^((d|D)ist|DIST)", command):
                if re.match(r"^((d|D)ist|DIST)(\([0-9]+,[0-9]+\)){2,}$", command):
                    self.msg(21)
                    self.dist(args)
                else:
                    self.msg(22)
                    self.msg(4)
            elif re.match(r"^((r|R)em|REM)", command):
                if re.match(r"^((r|R)em|REM)\([0-9]+,[0-9]+\)$", command):
                    self.msg(23)
                    self.rem(args)
                else:
                    self.msg(24)
                    self.msg(5)
            elif re.match(r"^((q|Q)uit|QUIT)$", command):
                    self.msg(12)
                    sys.exit()
            else:
                self.error_print()
            self.get_action()


if __name__ == "__main__":
    player = TMAP()
    player.welcome()
    player.get_action()
