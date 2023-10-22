#include <stdio.h>

unsigned int _strspn(char *, char *);


int main(void)
{
	int length_matched;
	char *mainString, *prefixSubString;

	mainString = "abcdefghijklm1234567890";
	prefixSubString = "abcdefghijklmnopqrstuvwxyz";

	length_matched = _strspn(mainString, prefixSubString);

	printf("The length matched is: %u", length_matched);

	return (0);
}


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}

	return (count);
}
