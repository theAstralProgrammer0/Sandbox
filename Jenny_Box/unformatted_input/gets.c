#include <stdio.h>
#include <conio.h>

/** main - Entry Point
  *
  * Description: Program to test unformatted input function gets
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char ch[10];

	while (1)
	{	
		gets(ch);

		printf("ch =>%s\n", ch);
	}

	return (0);
}
