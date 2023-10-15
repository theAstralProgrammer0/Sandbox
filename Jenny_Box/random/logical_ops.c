#include <stdio.h>

int main(void)
{
	int a = 1, b = 6, result1, result2;

	//result1 = a-- && ++b;

	result2 = --a && ++b;
/**
	result1 = 
		a > b && printf("Temitayo") || printf("Daisi-Oso") && printf("TD");

	result2 = 
		a > b && 1 || 1 || 1;

	result3 =
		a > b || 0 || 0 || 0; 
*/
	printf("%d\n", result2);
	
	return (0);
}
