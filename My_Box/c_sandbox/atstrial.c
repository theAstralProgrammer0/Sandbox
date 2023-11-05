#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int argvcounter(int, char **);
char *argstostr(int, char **);


int main(int argc, char *argv[])
{
    char *s;

    s = argstostr(argc, argv);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}

int argvcounter(int ac, char **av)
{
	int i, j, count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}

		count++;
	}

	//av[i] -= count - 1;

	//printf("This is string from av after count and revert: %s", 
	//printf("Count returned is: %d", count);
	return (count);
}


char *argstostr(int ac, char **av)
{
	int i, j, count, position;
	char *alloc_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	count = argvcounter(ac, av);

	alloc_str = (char *) malloc(count * sizeof(char));

	if (alloc_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j] != '\0'; j++)
		{
			alloc_str[position] = av[i][j];
			position++;
		}

		alloc_str[position++] = '\n';
	}

	return (alloc_str);
}

