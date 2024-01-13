#include "stack.h"

void push(int x)
{
	if (top == CAPACITY - 1)
	{
		dprintf(2, "Stack overflow\n");
		exit(1);
	}
	else
	{
		top++;
		stack[top] = x;
		dprintf(1, "%d has been pushed on top of the stack\n", x);
		exit(0);
	}
}


