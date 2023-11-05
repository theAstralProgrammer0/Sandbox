#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, count;

	/**if (argc <= 1)
		printf("Enter strings as args");
		*/
	for (i = 0; i < argc; i++)
	{
		for (j = 0; *argv[i] != '\0'; j++)
		{
			count++;
			argv[i]++;
		}
	}

	printf("This is the result for standard condition argv[i][j] != '\\0':%d\n", count);

	return (0);
}
