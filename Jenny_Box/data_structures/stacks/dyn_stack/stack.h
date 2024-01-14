#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <stddef.h>
#include <errno.h>
#include <stdarg.h>


typedef struct stack_node
{
	int data;
	struct stack_node *next;
} stack_t;

typedef struct stack_list
{
	stack_t *head;
	stack_t *tail;
	int size;
} stack_l;

stack_t *top = NULL;

void push(int data);
int 
#endif
