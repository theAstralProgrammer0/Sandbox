#include <stdio.h>
#include <stdlib.h>


/**
  k   
00000#
0000##
000###i
00####
0#####
*/

int main(int argc, char **argv)
{
	int k;
	int i;
	int n = atoi(argv[1]);

	for (k = 0; k < n; k++)
	{
		for (i = 0; i <= n - 3; i++)
		{
			if (k <= i - 1)
			{
				//putchar(555555);
				printf("%d",'y');
			}
			else
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
	return(0);
}
