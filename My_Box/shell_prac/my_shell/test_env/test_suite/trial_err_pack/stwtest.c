#include <stdio.h>
#include "test.h"

int main(void)
{
	int i;
	char **str_arr, *str = "pot='plotting -l'";
	size_t length;

	str_arr = strtow(str, '=');
	i = 0;
	while (str_arr[i++])
		printf("String %d: %s\n", i, str_arr[i]);
	printf("The size of the string array is %ld\n", str_arr_size(str_arr));
	return (0);
}
