#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = NULL;

	fp = fopen("abc.txt", "r+");
	if (fp == NULL)
	{
		printf("Error! No file exists");
		exit(98);
	}

	fputs("New", fp);
	fclose(fp);
}
