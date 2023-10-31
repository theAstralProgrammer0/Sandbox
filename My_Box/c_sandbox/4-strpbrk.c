#include <stdio.h>


char *_strpbrk(char *, char *);

int main(void)
{
	char *s1;
	char *acc;
	char *ress;

	s1 = "abcdefghijklm1234567890";
	acc = "m";

	ress = _strpbrk(s1, acc);

	printf("The first occurrence is at: %s", ress);

	return (0);
}

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;

		while (*(accept + j) != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
	}

	return (NULL);
}
