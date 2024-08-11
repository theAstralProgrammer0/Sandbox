#!/usr/bin/env python3
"""This module defines a Node object from the Base Node"""

from Base import BaseNode

class List():
    def __init__(self, data):
        super().__init__(data)


if __name__ == '__main__':
    node = Node(3)
    node.display()    
    node.createNode(8)
