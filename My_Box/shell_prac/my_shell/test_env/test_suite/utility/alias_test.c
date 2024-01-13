#include "liteshell.h"

int main(void)
{
	char *arguments[] = {"ll=lampholder", NULL};
	int ret;

	ret = handleAlias(arguments);
	printf("Return is %d\n", ret);
	return (0);
}
