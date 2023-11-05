#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int i, len, len2;
	char *str, *str2;

	str = (char *) malloc(100);

	printf("Enter a string: ");
	scanf("%[^\n]", str);

	len = strlen(str);
	
	str2 = (char *) realloc(str, len);
	memcpy(str2, str, len);
	len2 = strlen(str2);
	printf("length of string is: %d\n", len2);
	printf("String str is: %s\n", str);
	printf("String str2 is: %s\n", str2);
/**
	str = (char *) malloc(strlen(str) * sizeof(char));

	for (i = 0; i < strlen(str); i++)
	{
		printf("The string is:\n%c", *str);
		str++;
	}
*/
}
