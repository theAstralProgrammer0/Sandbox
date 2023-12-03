#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int word_counter(char *sstr)
{
	int count = 0;

	while (*sstr)
	{
		if (*sstr == ' ' || *sstr == '\t')
		{
			++sstr;
			continue;
		}
		else
		{
			while (*sstr != ' ' || *sstr == '\t')
				++sstr;
			++count;
		}
	}
	return (count);
}

char **strtow(char *str)
{
	int i, words, letters;
	char *steady, **bp, *wp;

	words = word_counter(str);
	bp = (char **) malloc((words + 1) * sizeof(char *));
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == ';')
			++str;
		else
		{
			steady = str;
			letters = 1;
			while (*steady)
			{
				if (*(++str) != ' ')
					++letters;
				else
				{
					wp = (char *) malloc((letters + 1)
							* sizeof(char));
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
//	free(wp);
	*bp = NULL;
	bp -= words;
	return (bp);
}
