#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void _free(void **ptr, int iter)
{
	while (ptr)
	{
		if (ptr != NULL && *ptr != NULL)
		{
			free(*ptr);
			*ptr = NULL;
		}
		++ptr;
	}
}
