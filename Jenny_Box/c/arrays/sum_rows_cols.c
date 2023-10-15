#include <stdio.h>
#include "c_array.h"
#define ARRAY_ROW_SIZE 5
#define ARRAY_COL_SIZE 5

/**
  * main - Entry Point
  *
  * Description: Reads a 2-D array, prints the 2-D array, finds the sum of the elements in the 2-D array, 
  * prints it and finds and prints the sum of individual rows and columns
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i, j, sum = 0;
	int s_row0 = 0, s_row1 = 0, s_row2 = 0, s_row3 = 0, s_row4 = 0;
	int s_col0 = 0, s_col1 = 0, s_col2 = 0, s_col3 = 0, s_col4 = 0;
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
		s_row0 += matrix[0][j];
	}
	printf(" Sum of row 1 = ", s_row0);
	
	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[1][j]);
		else
			printf("%d]\n\n", matrix[1][j]);
		s_row1 += matrix[1][j];
	}
	printf(" Sum of row 2 = ", s_row1);

	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[1][j]);
		else
			printf("%d]\n\n", matrix[1][j]);
		s_row2 += matrix[2][j];
	}
	printf(" Sum of row 3 = ", s_row2);

	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[2][j]);
		else
			printf("%d]\n\n", matrix[2][j]);
		s_row3 += matrix[3][j];
	}
	printf(" Sum of row 4 = ", s_row3);
	
	putchar('[');
	for (j = 0; j < ARRAY_COL_SIZE; j++)
	{
		if (j < ARRAY_COL_SIZE - 1)
			printf("%d, ", matrix[3][j]);
		else
			printf("%d]\n\n", matrix[3][j]);
		s_row4 += matrix[4][j];
	}
	printf(" Sum of row 5 = ", s_row4);
	
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

	for (i = 0; i < ARRAY_ROW_SIZE; i++)
		s_col0 += matrix[i][0];
	printf("\nSum of column 1 = ", s_col0);

	for (i = 0; i < ARRAY_ROW_SIZE; i++)
		s_col1 += matrix[i][1];
	printf("\nSum of column 2 = ", s_col1);

	for (i = 0; i < ARRAY_ROW_SIZE; i++)
		s_col2 += matrix[i][2];
	printf("\nSum of column 3 = ", s_col2);

	for (i = 0; i < ARRAY_ROW_SIZE; i++)
		s_col3 += matrix[i][3];
	printf("\nSum of column 4 = ", s_col3);
	for (i = 0; i < ARRAY_ROW_SIZE; i++)
		s_col4 += matrix[i][4];
	printf("\nSum of column 5 = ", s_col4);

	printf("Ths sum of all the elements in the array is: %d\n",  sum);
	return (0);
}

