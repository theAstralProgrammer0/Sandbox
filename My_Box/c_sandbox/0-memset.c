#include <stdio.h>

char *_memset(char *, char, unsigned int);

int main(void)
{
	char r[20];
	char *ms;

	ms = _memset(r, '6', 10);

	printf("%s", ms);

	return (0);
}


char *_memset(char *buf, char ch, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(buf + i) = ch;
	}

	return(buf);
}
