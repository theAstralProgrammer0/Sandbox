#include <unistd.h>
#include <stdio.h>

extern char **environ;

int main(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		++i;
	}
	return (0);
}
