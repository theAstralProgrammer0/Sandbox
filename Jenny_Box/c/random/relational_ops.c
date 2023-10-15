#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 18, b = 9, c, d, e = 10, f;

	c = b++;

	d = b;

	f = a > b > d < c;

	printf("%d", f != 1);

	printf("%d", a + c == b >= e < c + d != 1);

	return (0);

}
