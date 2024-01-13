#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
#include <unistd.h>

int main(void)
{
	char *input = NULL, **arr_str;
	size_t size, bytesR, words;

	while (1)
	{

		bytesR = getline_v(&input, &size);
		if (bytesR == -1)
		{
			free(input);
			dprintf(STDERR_FILENO, "getline_v failed\n");
			exit(EXIT_FAILURE);
		}
		/**printf("This is input going into strtow: %s\n", input);*/
		arr_str = strtow(input);
		while (*arr_str)
		{
			//if (arr_str == NULL)
				//printf("Error from strtow: arr_str = NULL\n");
			printf("*arr_str is %s\n", *arr_str);
			++arr_str;
		}
		break;
			//printf("Skipped arr_str access\n");

	}
	free_str_arr(arr_str);
	free(input);
	return (0);
}
