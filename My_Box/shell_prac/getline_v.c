#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t getline_v(char **lineptr, size_t *n)
{
	ssize_t nread;
	size_t size = 0;
	char ch, *buffer = NULL;

	while (1)
	{
		nread = read(STDIN_FILENO, &ch, 1);
		if (nread == -1)
		{
			dprintf(STDERR_FILENO, "Can't read\n");
			return (-1);
		}
		/** Optional branch */
		if (ch == '\n' || nread == 0)
		{
			if (size == 0)
			{
				dprintf(STDERR_FILENO, "No input entered\n");
				free(buffer);
				return (-1);
			}
			else
				break;
		}
		else
		{
			if (size == 0)
				buffer = (char *) malloc(1);
			else
				buffer = (char *) realloc(buffer, size + 1);
			if (buffer == NULL)
			{
				dprintf(STDERR_FILENO, "Cant alloc\n");
				free(buffer);
				return (-1);
			}
			buffer[size++] = ch;
		}
	}
	buffer = (char *) realloc(buffer, size + 1);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Cant realloc\n");
		free(buffer);
		return (-1);
	}
	buffer[size] = '\0';
	printf("This is buffer --> %s\n", buffer);
	*lineptr = buffer;
	*n = size;
	return (size);
}

int main(void)
{
	char *input;
	size_t n;
	ssize_t nread;

	while (1)
	{
		nread = getline_v(&input, &n);
		if (nread == -1)
		{
			free(input);
			exit(EXIT_FAILURE);
		}
		printf("This is the string: %s\n", input);
		printf("This is the size: %ld\n", n);
	}
	free(input);
	return (0);
}
