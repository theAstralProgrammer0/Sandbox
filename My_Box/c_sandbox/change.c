#include <stdio.h>
#include <stdlib.h>

int coin_finder(int, int, int);

int main(int argc, char *argv[])
{
	int cents;
	int coins;

	cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents == 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	coin_finder(cents, 0, 0);
	return (0);
}


int coin_finder(int cents, int coins, int i)
{
	int change[5] = {25, 10, 5, 2, 1};

	if (cents == 0)
		printf("%d\n", coins);
	else
	{
		coins += cents / change[i];
		cents %= change[i];
		coin_finder(cents, coins, i + 1);
	}

	return (0);
}
