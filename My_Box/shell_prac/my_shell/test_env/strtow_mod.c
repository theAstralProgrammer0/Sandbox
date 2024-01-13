#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**int word_counter(char *sstr, ...)
{
	va_list ap;
	int count = 0;
	int delim, is_delim = 1;

	va_start(ap, sstr);
	while (*sstr)
	{
		delim = va_arg(ap, int);
		if (*sstr == delim)
			is_delim = 1;
		else
		{
			if (is_delim)
				++count;
			is_delim = 0;
		}
		++sstr;
	}
	va_end(ap);
	return count;
}*/

int word_counter(char *sstr, int delimiters[])
{
    int count = 0;

    while (*sstr)
    {
        int is_delimiter = 0;
        for (int i = 0; delimiters[i] != '\0'; ++i)
        {
            if (*sstr == delimiters[i])
            {
                is_delimiter = 1;
                break;
            }
        }

        while (*sstr && is_delimiter)
        {
            ++sstr;
            is_delimiter = 0;
        }

        if (*sstr)
        {
            ++count;

            while (*sstr && !is_delimiter)
            {
                for (int i = 0; delimiters[i] != '\0'; ++i)
                {
                    if (*sstr == delimiters[i])
                    {
                        is_delimiter = 1;
                        break;
                    }
                }

                if (!is_delimiter)
                {
                    ++sstr;
                }
            }
        }
    }

    return count;
}
char **strtow(char *str, ...)
{
	va_list ap;
	int i, words, letters, delim[];
	char *trace, **bp, *wp, **final;

	va_start(ap, str);
	delim = {' ', '='};
	words = word_counter(str, delim);
	
	bp = (char **) malloc((words + 1) * sizeof(char *));
	if (bp == NULL)
		return NULL;
	final = bp;
	while (*str)
	{
		if (*str == delim)
			++str;
		else
		{
			trace = str;
			letters = 0;  // Initialize letters to 0
			while (*trace && *trace != delim)  // Fixed condition here
			{
				++letters;
				++trace;
			}
			wp = (char *) malloc((letters + 1) * sizeof(char));
			if (wp == NULL)
			{// Free previously allocated memory
				for (i = 0; i < words; ++i)
					free(bp[i]);
				free(bp);
				return NULL;
			}
			// Copy the word into wp
			for (i = 0; i < letters; ++i)
				wp[i] = str[i];
			wp[letters] = '\0';
			*bp = wp;
			++bp;
			str += letters;
		}
	}
	*bp = NULL;
	return final;
}
