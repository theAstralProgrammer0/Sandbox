#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fp = NULL;
	char ch, *buffer;
	int len;

	fp = fopen("abc.txt", "a+");
	if (fp == NULL)
	{
		printf("An error occured");
		exit(98);
	}
	while (!feof(fp))
	{
		fgetc(fp);
		++len;
	}
	printf("%d\n", len);
/**	while (!feof(fp))
	{
		fgets(buffer, len, fp);
	}
	printf("%s", buffer);
	fputs(" is awesome", fp);
*/	fclose(fp);
	return (0);
}
