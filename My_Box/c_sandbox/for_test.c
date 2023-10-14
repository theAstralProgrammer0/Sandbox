#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 4; i++)
	{
		for (j = i; j <= 4; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return (0);
}
