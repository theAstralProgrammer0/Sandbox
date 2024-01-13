#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *arguments[] = {"alias", "pots", "lesbian", NULL};
	char **rest = arguments + 1;

	while (*rest)
	{
		printf("%s\n", *rest);
		++rest;
	}
	return (0);
}
