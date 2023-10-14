#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{
	int ch;

	printf("Enter a character: \n");
	ch = getc(stdin);
	printf("The character you entered is: %c\n", ch);

	//Create a while loop that prints a 2 x 2 matrix of numbers

	int i = 0;
	int j = 0;

	while (i <= 3)
	{
		while (j <= 3)
		{
			putchar('*');
			putchar('\n');
			j++;
		}

		i++;
	}

	return(0);
}

