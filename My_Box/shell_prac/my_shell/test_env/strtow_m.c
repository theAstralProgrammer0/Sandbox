#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int word_counter(char *sstr, char delim)
{
	int count = 0;

	while (*sstr)
	{
		if (*sstr == delim)
		{
			++sstr;
			continue;
		}
		else
		{
			while (*sstr && *sstr != delim)
				++sstr;
			++count;
		}
	}
	return (count);
}

char **strtow(char *str, char delim)
{
	int i, words, letters;
	char *steady, **bp, *wp, **final;

	words = word_counter(str, delim);
	bp = (char **) malloc((words + 1) * sizeof(char *));
	if (bp == NULL)
		return (NULL);
	final = bp;
	while (*str)
	{
		if (*str == delim)
			++str;
		else
		{
			steady = str;
			letters = 1;
			while (*steady)
			{
				if (*(++str) && *str != delim)
					++letters;
				else
				{
					wp = (char *) malloc((letters + 1)
							* sizeof(char));
					if (wp == NULL)
					{
						free(bp);
						return (NULL);
					}
					*bp = wp;
					for (i = 0; i < letters; ++i)
						wp[i] = steady[i];
					wp[letters] = '\0';
					++bp;
					break;
				}
			}
		}
	}
	*bp = NULL;
	return (final);
}
