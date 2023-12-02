#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *input;
	size_t n;
	size_t charsRead;

	while (1)
	{
		printf("$ ");
		charsRead = getline(&input, &n, stdin);

		if (charsRead == -1)
		{
			printf("Error\n");
			free(input);
			exit(1);
		}
		printf("%s", input);
	}
	free(input);
	return (0);
}
