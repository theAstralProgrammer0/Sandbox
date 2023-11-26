#include <stdio.h>
#include <stdlib.h>

/**
  * create file pointer
  * open file in read mode
  * read chars one after the other using while loop and !feof condition
  * print the read chars
  */

int main(void)
{
	char ch;
	FILE *fp;

	fp = fopen("xyz.txt", "r");

	while (!feof(fp))
	{
		ch = fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
}
