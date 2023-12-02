#include <string.h>
#include <stdio.h>

int main(void)
{
	char *token, str[] = "     ALX  SCHOOL   #cisfun";

	token = strtok(str, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
