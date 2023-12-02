#include <unistd.h>
#include <stdio.h>

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)), char **env)
{
	int i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		++i;
	}
	return (0);
}
