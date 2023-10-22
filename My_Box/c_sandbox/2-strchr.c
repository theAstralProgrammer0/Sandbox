#include <stdio.h>
#include <string.h>


char *_strchr(char *s, char c);


int main(void)
{
	char *s1;
	char ch = 't';
	char *res;

	s1 = "String to be parsed";

	res = _strchr(s1, ch);

	printf("%s", res);

	return (0);
}


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			  return (s + i);
	}
	return (NULL);
}
