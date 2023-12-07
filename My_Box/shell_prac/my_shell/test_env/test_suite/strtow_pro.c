#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to count the number of words in a string using a delimiter
int word_counter(const char *sstr, const char *delim)
{
	int count = 0;

	while (*sstr)
	{
		if (strchr(delim, *sstr) != NULL)
		{
			++sstr;
			continue;
		}
		else
		{
			while (*sstr && strchr(delim, *sstr) == NULL)
				++sstr;
			++count;
		}
	}
	return count;
}

// Function to allocate memory for a string
char *allocString(const char *src, size_t len)
{
	char *dest = malloc(len + 1);
	if (dest == NULL)
	{
		perror("Memory allocation error");
		exit(EXIT_FAILURE);
	}
	strncpy(dest, src, len);
	dest[len] = '\0';
	return dest;
}

// Function to tokenize an input string using a delimiter
char **tokenize(const char *input_str, const char *delim)
{
	int i, words, letters;
	char **tokens, **final, *wp;
	const char *str = input_str, *trace;

	words = word_counter(str, delim);
	tokens = (char **)malloc((words + 1) * sizeof(char *));
	if (tokens == NULL)
		return NULL;
	final = tokens;
	while (*str)
	{
		if (strchr(delim, *str) != NULL)
			++str;
		else
		{
			trace = str;
			letters = 1;

			while (*trace && strchr(delim, *trace) == NULL)
			{
				++letters;
				++trace;
			}

            wp = allocString(str, letters);
            *tokens = wp;
            ++tokens;
            str += letters;
        }
    }

    *tokens = NULL;
    return final;
}
