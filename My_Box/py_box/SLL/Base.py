#!/usr/bin/env python3
"""This module contains definitions of a SLL and a Node in Python"""

class Node:
    """Definition of Node class"""
    def __init__(self, data):
        """Initializes the Node object at instatiation"""
        self.data = data
        self.next = None

    def display(self):
        """Display a Node objcet"""
        print(f"[{self.data}|{self.next}]")



class LinkedList:
    def __init__(self, head=None, tail=None):
        self.head = head
        self.tail = tail


    def insertAtBegin(self, data):
        """Adds a Node to the beginning of the list and returns the added
        node"""
        newNode = Node(data)
        if not self.head:
            self.head = newNode
        else:
            newNode.next = self.head
            self.head = newNode
        return newNode


    def insertAtIndex(self, data, idx):
        """Adds a Node at a specific index of the list and returns the added
        node"""
        i = 0
        newNode = Node(data)
        current = self.head

        if not current:
            return LinkedList.insertAtBegin(data)

        try:
            while current and i < idx - 1:
                current = current.next
                i += 1
            newNode.next = current.next
            current.next = newNode
            return newNode
        except Exception:
            print("Bad index parameter")
            return None

    def insertAtEnd(self, data):
        """Adds a Node at the end of the list"""
        newNode = Node(data)
        current = self.head
        
        if not current:
            return LinkedList.insertAtBegin(data)

        while current.next:
            current = current.next
        current.next = newNode
        


    def getNodeByIndex(self, idx):
        """Returns a Node object at the specified index"""
        i = 0
        current = self.head

        if not current:
            print("Linked List is Empty")
            return None
        
        try:
            while current and i < idx:
                current = current.next
                i += 1
            return current
        except Exception:
            print("Bad index parameter")

    def updateNode(self, val, idx):
        """Updates the data of a node at a specified index and returns the
        node"""
        i = 0
        current = self.head

        if not current:
            print("List is Empty")
        
        try:
            while current and i < idx:
                current = current.next
                i += 1
            current.data = val
            return current


    def display(self):
        """prints this linked list"""
        current = self.head

        while (current):
            if (current.next):
                print(f"{current.data} -> ", end="")
            else:
                print(f"{current.data}")
            current = current.next
