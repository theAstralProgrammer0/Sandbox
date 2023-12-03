#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "shell.h"

void free_str_arr(char **dptr)
{
	while (*dptr)
	{
		free(*dptr);
		*dptr = NULL;
		++dptr;
	}
}
