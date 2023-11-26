#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char choice;
	char *buffer;
	int choice_int = 1;
	FILE *fp;

	fp = fopen("xyz.txt", "w");
	if (fp == NULL)
	{
		printf("An Error Occured");
		exit(98);
	}

	while (choice_int)
	{
		puts("Enter a string");
		buffer = fgets(buffer, 256, stdin);
		fputs(buffer, fp);

		puts("The string has been written into the file successfully!\nWould you still like to write a string into the file? (Y)es or (N)o?");
		choice = getchar();
		getchar();
		if (choice == 'n' || choice == 'N')
			choice_int = 0;
		else
			choice_int = 1;
	}
	puts("Your file has been created and all strings have been written. See xyz.txt for more details");
	fclose(fp);
	return (0);
}
