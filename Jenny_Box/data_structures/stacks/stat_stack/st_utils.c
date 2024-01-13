#include "stack.h"

int is_number(const char *string)
{
	int i;

	while (*string)
	{
		if (isdigit(*string))
			string++;
		return (0);
	}
	return (1);
}
