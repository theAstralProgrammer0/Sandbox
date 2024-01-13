#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "shell.h"

int main(void)
{
	char *string, **sp;
	int words = 0;

	string = "alias pot per='poland is a team'";
	sp = strtow(string, '=');
	while (*sp)
	{
		printf("%s\n", *sp);
		++sp;
		++words;
	}
	sp -= words;
	free_str_arr(sp);
	return (0);
}
