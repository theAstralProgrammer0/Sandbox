#ifndef STACK_H
#define STACK_H
#define CAPACITY 256

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * stat_stack_int - Stack struct, abstracted data structure for stack
 * stack_arr: Stack Array member of Stack Struct
 * size: Size of stack at any given time
 */

typedef struct stat_stack_int
{
	int stack_arr[CAPACITY];
	int size;
} stat_stack_int;

/**
 * Global Variables 
 */
int top = -1;
stat_stack_int stack = {[], 0};

/**
 * Stack OPerations
 */
void push(int data);
int pop(void);
int pop_at_index(size_t index);
int peek(void);
void display(stat_stack_int stack_inst);
stat_stack_int rev_stack(stat_stack_int stack_inst);


#endif
