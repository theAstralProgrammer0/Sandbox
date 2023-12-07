#include "liteshell.h"

int main(void)
{
	char *(arguments[]) = {"ll=pillow"};
	int ret;

	ret = handleAlias(arguments);
	printf("Return is %d\n", ret);
	return (0);
}
