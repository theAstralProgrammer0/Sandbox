#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: This program finds the average of 5 students
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int marks[5];
	int i;
	int sum;
	int avg;

	puts("Enter 5 Numbers for their averages to be found");
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	avg = sum / 5;
	printf("The average of the numbers is %d\n", avg);
}
