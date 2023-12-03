#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	ssize_t int_mode = 1, bytesRead;
	char *buf = NULL;
	size_t size;


	while (int_mode)
	{
		int_mode = isatty(STDIN_FILENO);
		if (int_mode == 1)
		{
			write(STDOUT_FILENO, "$ ", 5);
			bytesRead = getline_v(&buf, &size);
			/**If there's an issue from redirection that causes
			  *stdin stream to be closed, getline_v will return -1
			  *Error should be handled more gracefully
			  *(-bash: none.txt: No such file or directory*/
			if (bytesRead == -1)
			{
				dprintf(STDERR_FILENO, "Error\n");
				exit(EXIT_FAILURE);
			}
			strtow(buf);

		}
		else
			break;
	}
	free(buf);
	return (0);
}
