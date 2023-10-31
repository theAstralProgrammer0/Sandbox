#include <stdio.h>

char *_strstr(char *s1, char *s2);

int main(void)
{
	char *mainString;
	mainString = "Check this main string for a matched substring";
	char *subString;
	subString = "substring";
	char *ress;

	ress = _strstr(mainString, subString);

	printf("This where the substring occurs in the main string: %s", ress);

	return (0);
}


char *_strstr(char *s1, char *s2)
{
/**	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	//	for (j = 0; s2[j] != '\0'; j++)
	//	{
			if (s1[i] == s2[j])
			{
				return (s1 + i);
			}
	//	}
		return (NULL);
	}
*/

	while (*s1 != '\0')
	{
		while (*s2 != '\0')
		{
			if (*s1 == *s2)
			{
				s1++;
				s2++;
				printf("Found a match");
			}	
			printf("This is where s1 is pointing after the string %s", s1);
			return (s1);
		}
		//return (s1);
	}
	return (NULL);
}
