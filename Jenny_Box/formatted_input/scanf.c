#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: Testing the scanf function.
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int intt;
	float floatt;
	char charr;
	double doublee;
	
	/**puts("Enter an integer:");
	scanf("%d", &intt);
	printf("The integer you just entered is: %d\n", intt);
	*/
	puts("Enter a floating-point number:");
	scanf("%f", &floatt);
	printf("The floating-point number you just entered is: %f\n", floatt);
	
	puts("Enter a character:");
	charr = getchar();
	printf("The character you just entered is: %c\n", charr);
	
	puts("Enter a double number:");
	scanf("%lf", &doublee);
	printf("The double number you just entered is: %lf\n", doublee);
	
	charr = getchar();
	putchar(charr);
	puts("That is the end of the story...");

	return (0);
}
