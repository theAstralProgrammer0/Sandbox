#include <stdio.h>

int main(void)
{
	char var = 't';

	char *ptr;

	ptr = &var;

	char **dptr;

	dptr = &ptr;

	**dptr == 't'

		ptr = &var
		dptr = &ptr

		*(&var) = var;
	
	char *str = "whatever string";

	str = {'w', 'h', 'a', ...'g', '\0'}

	*str, *(str + 1), *(str + 2);

	*str| str;

	printf("%c", *str);
	
	str = &str[0];

	char *str2 = "Getting ready";

	str2 = &str2[0];

	char **dptr;

dptr -> ptr -> var;

tprt -> dptr -> ptr -> var;

dptr = &str2;

**dptr | *dptr;


*str2 = * (&str2[0]) = str2[0];

**dptr =	> **(&str2) =>**(&(&str2[0])) => *(&str2[0]) => str2[0];

*dptr => *(&str2) => str2 => &str2[0];


void set_string(char **s, char *to);

/**
  Bob Dylan, Robert Allen
  //after set string
  Bob Dylan, Bob Dylan
*/

int main(void)
{
	char *s0 = "Robert Allen";
	char *s1 = "Bob Dylan";

	printf("%s, %s", s1, s0);
	set_string(&s1, s0);
	printf("%s, %s", s1, s0);

	return (0);
}

s1 = s0

void set_string(char **s, char *to)
{
	s = &s1;
	**s = **(&s1) => **(&(&(s1[0]))) => *(&(s1[0])) => s1[0];
	to = s0;

	*s = s1;
	*s = to;


