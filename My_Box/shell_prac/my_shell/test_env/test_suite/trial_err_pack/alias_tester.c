#include "liteshell.h"

int main(void)
{
	alias_t AList;
	alias_t *aliasList = &AList;
	char **user_input, *input, **arguments;
	size_t n;
	ssize_t bytesR;

	aliasList->head = NULL;
	aliasList->tail = NULL;
	aliasList->size = 0;
	while (1)
	{
		printf("$ ");

		bytesR = getline_v(&input, &n);
		if (bytesR == -1)
			printf("Could not read\n");

		user_input = strtow(input, ' ');
		
		if (strcmp(user_input[0], "_alias") == 0)
		{
			aliasExecutor(aliasList, user_input + 1);
		}
		else
			printf("Not an alias command\n");
	}
	return (0);
}

