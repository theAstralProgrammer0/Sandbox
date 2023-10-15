#include <stdio.h>
#include "c_array.h"
#define ARRAY_ROW_SIZE 5
#define ARRAY_COL_SIZE 5

/**
  * main - Entry Point
  *
  * Description: Reads a 2-D array, prints the 2-D array, finds the sum of the elements in the 2-D array and prints the sum
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i, j, sum = 0;
	int matrix[ARRAY_ROW_SIZE][ARRAY_COL_SIZE];
	
	puts("Enter all elements of the array");
	for (i = 0; i < ARRAY_ROW_SIZE; i++)
	{
		for (j = 0; j < ARRAY_COL_SIZE; j++)
			scanf("%d", &matrix[i][j]);
	}

	puts("The matrix you entered is:");

	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[0][j]);
		else
			printf("%d]\n\n", matrix[0][j]);
	}
	
	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[1][j]);
		else
			printf("%d]\n\n", matrix[1][j]);
	}
	
	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[1][j]);
		else
			printf("%d]\n\n", matrix[1][j]);
	}

	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[2][j]);
		else
			printf("%d]\n\n", matrix[2][j]);
	}
	
	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[3][j]);
		else
			printf("%d]\n\n", matrix[3][j]);
	}
	
	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[4][j]);
		else
			printf("%d]\n\n", matrix[4][j]);
	}

	for (i = 0; i < ARRAY_ROW_SIZE; i++)
	{
		for (j = 0; j < ARRAY_COL_SIZE; j++)
			sum += matrix[i][j];
	}

	printf("Ths sum of all the elements in the array is: %d\n",  sum);

	return (0);
}

