#include <stdio.h>

int main(int __attribute__((__unused__))__argc, char **argv)
{
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		++argv;
	}
	return (0);
}
