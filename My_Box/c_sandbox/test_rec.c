#include <stdio.h>

int sum(int n);

int main(void)
{
	int a;

	a = sum(5);

	printf("%d", a);

	return (0);
}


int sum(int n)
{
	int s;

	if (n == 1)
		return n;
	else
	{
		s = n + sum(n - 1);
		return s;
	}
}
