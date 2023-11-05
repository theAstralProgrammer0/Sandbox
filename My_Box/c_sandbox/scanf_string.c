#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int i;
	char *str;


	printf("Enter a string: ");
	scanf("%p", &str);
	
	str = (char *) malloc(strlen(str) * sizeof(char));

	for (i = 0; i < strlen(str); i++)
	{
		printf("The string is:\n%c", *str);
		str++;
	}
}
