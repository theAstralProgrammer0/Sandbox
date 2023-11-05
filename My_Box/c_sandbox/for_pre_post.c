#include <stdio.h>
#include <string.h>


int main(void)
{
	int i, j, count_pre, count_post;
	char *str;

	str = "I am";

	for (i = 0; str[i] != '\0'; i++)
	{
		count_post++;
	}

	for (j = 0; str[j] != '\0'; ++j)
	{
		count_pre++;
	}

	printf("Count for post increment: %d\n", count_post);
	printf("Count for pre increment: %d\n", count_pre);
	printf("i (post) after str[i] != '\\0' is false: %d\n", i);
	printf("j (pre) after str[j] != '\\0' is false: %d\n", j);
	printf("String length using strlen(str) is: %lu\n", strlen(str));
	return (0);
}
