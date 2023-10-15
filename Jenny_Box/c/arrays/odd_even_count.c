#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: A program to count the odd and even numbers entered
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int nums[15];
	int odd_count;
	int even_count;
	int i;

	for (i = 0; i < 15; i++)
	{
		scanf("%d", &nums[i]);

		if (nums[i] % 2 != 0)
			odd_count++;
		else if (nums[i] % 2 == 0)
			even_count++;
	}
	printf("The odd numbers are %d", odd_count);
	printf("The even numbers are %d", even_count);

	return (0);
}
