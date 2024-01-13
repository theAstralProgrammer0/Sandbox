#include "stack.h"

int main(int argc, char **argv)
{
	char *command = NULL;
	int data;

	if (argc <= 1)
	{
		dprintf(2, "Usage: ./stack <command> [data]\n");
		exit(EXIT_FAILURE);
	}

	command = argv[1];
	if (argc >= 3)
	{
		if (is
		data = argv[2];
		switch (command)
		{
			case "push":
				push(data);
				break;
			case "pop_idx":
				pop_at_index(data);

