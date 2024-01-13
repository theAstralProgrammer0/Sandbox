#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	unsigned long long int cast;
	char *str;
	char **endptr;
	int i;

	str = "060078";
	cast = strtoull(str, endptr, 0);

	printf("This is what the string is casted to: %llu\n", cast);

	for (i = 0; endptr[i]; i++)
	{
		printf("This is what is stored in each endptr array: %s\n", endptr[i]);
	}
	return (0);

}
