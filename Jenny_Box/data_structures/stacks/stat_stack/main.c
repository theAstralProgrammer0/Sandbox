#include "stack.h"

int main(int argc, char **argv)
{
	char *command = NULL;
	int data;

	if (argc == 1 || argc > 3)
	{
		dprintf(2, "Usage: %s <command> [data]\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	command = argv[1];
	if (argc == 3 && is(number(data)))
	{
		data = atoi(argv[2]);
		switch (command)
		{
			case "push":
				push(data);
				break;
			case "pop_idx":
				pop_at_index(data);
				break;
		}
	}
	return (0);
}
