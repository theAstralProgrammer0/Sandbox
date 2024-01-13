#include <stdio.h>
#include <unistd.h>

int main(void)
{
	ssize_t count = 0;
	char ch;
	FILE *fp = NULL;

	fp = fopen("Req", "r");
	if (fp == NULL)
	{
		printf("Error\n");
		return (-1);
	}	
	while ((ch = fgetc(fp)) != EOF)
	{
		count += write(1, &ch, 1);
	}
	printf("\nThe total characters printed are: %ld", count); 
	fclose(fp);
	return (0);
}
