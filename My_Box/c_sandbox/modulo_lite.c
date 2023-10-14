#include <stdio.h>

int main(void)
{
	int i = -10;
	int j = 7;
	int modulo;

	modulo = i % j;

	printf("%d mod %d is: %d\n", i, j, modulo);
	return (0);
}
