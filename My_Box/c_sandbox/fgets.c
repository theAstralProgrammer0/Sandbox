#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	char *res = NULL, *buffer = NULL;
	FILE *fp = NULL;
	
	fp = fopen("new_file", "r");
	if  (fp == NULL)
	{
		fprintf(stderr, "File pointer failed to open\n");
		exit(EXIT_FAILURE);
	}
	buffer = (char *) malloc(2000);
	if (buffer == NULL)
	{
		fprintf(stderr, "Failed to malloc\n");
		exit(EXIT_FAILURE);
	}

	res = fgets(buffer, 2000, fp);
	printf("This is the sizeof buffer: %d\n", 2000);
	if (res == NULL)
	{
		free(buffer);
		fprintf(stderr, "Error or No characters read before EOF encountered\n");
		exit(EXIT_FAILURE);
	}

	printf("This is return value from fgets: %s\n", res);
	printf("This is buffer content: %s\n", buffer);
	free(buffer);
	return (0);
}


