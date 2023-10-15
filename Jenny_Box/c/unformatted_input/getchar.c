#include <stdio.h>

/** main - Entry Point
  *
  * Description: Program to test unformatted input function getchar
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar();

		if (ch == '-')
		{
			printf("You have entered a negative value. Program ending ...\n");
			break;
		}
		putchar(ch);
	}

	return (0);
}
