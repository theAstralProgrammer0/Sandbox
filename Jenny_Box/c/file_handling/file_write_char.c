#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  *
  * Description: This function asks the user to write a character into a file
  * and provides them with a choice to either continue writing or stop writing
  *
  * Return: Always 0 (Success), 98 Failure
  */

int main(void)
{
	char ch, choice;
	int choice_int = 1;
	FILE *fp;

	fp = fopen("abc.txt", "w");
	if (fp == NULL)
	{
		printf("An error occured");
		exit(98);
	}

	while (choice_int)
	{
		puts("Enter a character:");
		ch = getchar();
		getchar();
		fputc(ch, fp);

		puts("The character has been written into the file.\nWould you like to write another character into the file? (Y) or (N)?");
		choice = getchar();
		getchar();

		if (choice == 'n' || choice == 'N')
			choice_int = 0;
		else
			choice_int = 1;
	}
	puts("Check abc.txt to access the file and see what you've written");
	fclose(fp);
	return (0);
}
