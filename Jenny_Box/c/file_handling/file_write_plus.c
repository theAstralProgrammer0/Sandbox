#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = NULL;
	char *buffer;

	fp = fopen("abc.txt", "w+");
	if (fp == NULL)
	{
		printf("An error occured");
		exit(98);
	}

	while (!feof(fp))
	{
		fgets(buffer, 15, fp);
		printf("%s", buffer);
	}
	fputs(" Temitayo", fp);
	fclose(fp);
	return (0);
}
