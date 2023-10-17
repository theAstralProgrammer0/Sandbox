#include <stdio.h>
#include "main.h"


/**
  * main - Entry Point
  *
  * Description: This function is to use function pointers to program a
  * calculator
  *
  *
  * 
  */

int main(void)
{
	float a, b;
	char choice;
	float (*ptr[4])(float a, float b) = {sum, sub, mul, div};

	puts("Enter your operation choice 0 - add  1 - sub  2 - mul 3 - div");
	scanf("%hhd", &choice);

	puts("Enter two numbers:");
	scanf("%f %f", &a, &b);

	printf("The answer is: %f", ptr[choice](a, b)); 
	


}


