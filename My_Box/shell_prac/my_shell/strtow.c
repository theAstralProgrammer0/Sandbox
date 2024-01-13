#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void _free(void **ptr, int iter)
{
	while (ptr)
	{
		if (ptr != NULL && *ptr != NULL)
		{
			free(*ptr);
			*ptr = NULL;
		}
		++ptr;
	}
}


int word_counter(char *sstr)
{
  int count = 0;
  while(*sstr)
  {
    if (*sstr == ' ' || *sstr == '\t')
    {
      ++sstr;
      continue;
    }
    else
    {
      while (*sstr != ' ' || *sstr == '\t')
      {
        ++sstr;
      }
      ++count;
    }
  }
  return (count);
}

char **strtow(char *str, char *delim)
{
  int i, words, letters;
  char *steady, **bp, *wp;
  words = word_counter(str);
  bp = (char **)malloc((words + 1)*sizeof(char *));
  while(*str)
  {
    if (*str == ' '|| *str == '\t')
    {
      ++str;
      continue;
    }
    else
    {
      letters = 1;
      steady = str;
      while (*steady)
      {
        if (*(++str) != ' ')
        {
          ++letters;
          continue;
        }
        else
        {
          wp = (char *) malloc((letters + 1)*sizeof(char));
          *bp = wp;
          i = letters;
          while (i)
          {
            *wp = *steady;
            ++wp;
            ++steady;
            --i;
          }
          *wp = '\0';
          ++bp;
          break;
        }
      }
    }
  }
  *bp = NULL;
  bp -= words;
  return (bp); 
}

int main(void)
{
  char *string, **sp; 
  int words = 0;
  string = "   ALX  SCH ";
  sp = strtow(string);
  while (*sp != NULL)
  {
    printf("%s\n", *sp);
    ++sp;
    ++words;
  }
  sp -= words;
  _free(sp, words);
  return (0);
}
