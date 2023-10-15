#include <stdio.h>
#include "c_array.h"
#define ARRAY_SIZE 5

/**
  * main - Entry Point
  *
  * Description: Sum the elements in 2 arrays and store the answers in a 3rd array
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;
	int first_Array[ARRAY_SIZE];
	int second_Array[ARRAY_SIZE];
	int third_Array[ARRAY_SIZE];


	puts("Enter 5 numbers to initialize the first array");
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		scanf("%d", &first_Array[i]);
	}

	puts("The first array you entered is:");
	putchar('[');
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		if (i < ARRAY_SIZE - 1)
			printf("%d, ", first_Array[i]);
		else
			printf("%d]\n\n", first_Array[i]);
	}
	
	puts("Enter 5 numbers to initialize the second array");
	for (i = 0; i < ARRAY_SIZE; i++)
	{	
		scanf("%d", &second_Array[i]);	
	}

	puts("The second array you entered is:");
	putchar('[');
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		if (i < ARRAY_SIZE - 1)
			printf("%d, ", second_Array[i]);
		else
			printf("%d]\n\n", second_Array[i]);
	}

	puts("The sum of the arrays gives this third array");
	putchar('[');
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		third_Array[i] = first_Array[i] + second_Array[i];

		if (i < ARRAY_SIZE - 1)
		{
			printf("%d, ", third_Array[i]);
		}
		else
		{
			printf("%d]\n", third_Array[i]);
			putchar('\n');
		}
	}

	return (0);
}

