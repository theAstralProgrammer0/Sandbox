#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	ssize_t int_mode = 1;

	while (int_mode)
	{
		int_mode = isatty(STDIN_FILENO);
		if (int_mode == 1)
		{
			write(STDOUT_FILENO, "$ ", 5);
			getline_v(
	}

	return (0);
}
