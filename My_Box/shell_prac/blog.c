#include <stdio.h>

int main(void)
{
	char ch, choice;
	unsigned int choice_int = 1;

	while (choice_int)
	{
		puts ("Enter a character:");
		ch = getchar();
		getchar();

		printf("The character you entered -> %c\n", ch);

		puts("Would you like to enter another character?\nEnter (Y) or (N)");
		choice = getchar();
		getchar();

		if (choice == 'n' || choice == 'N')
			choice_int = 0;
		else
			choice_int = 1;
	}
	puts("Ending Program");
	return (0);
}
