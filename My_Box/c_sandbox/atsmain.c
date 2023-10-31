#include <stdio.h>

int argstostr(int, char **);

int main(int argc, char *argv[])
{
	int res;

	res = argstostr(argc, argv);

	printf("%d", res);

	return (0);
}
