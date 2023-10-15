#include <stdio.h>


/**
  * main - Entry Point
  *
  * Description: To try out format specifiers in printf string
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	float a;
	int b;

	a = 108.567837;
	b = -1298;

	printf("a = %10.2f \n b = %d\n", a, b);	
	printf("a = %0.2f \n b = %04d\n", a, b);
	printf("a = %50.6f \n b = %3d\n", a, b);
	printf("a = %10.7f \n b = %1d\n", a, b);
	printf("a = %4.1f \n b = %10d\n", a, b);

	return (0);
}
