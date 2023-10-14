#include <stdio.h>

char fun(void);

void main()
{
	fun();
}

char fun()
{
	char c, ch;
	printf("Enter a character:\n>>");
	scanf("%c", &ch);
	c = printf("\nCharacter you just entered is %c\n", ch);
	return 'c';
}
