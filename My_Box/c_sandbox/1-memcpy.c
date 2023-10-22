#include <stdio.h>

char *_memcpy(char *, char *);

int main(void)
{
	char r[50];
	char *mA1 = "Memory Area 1";
	char *mc;

	mc = _memcpy(r, mA1);

	printf("%s", mc);

	return (0);
}

char *_memcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(src + i) != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}

