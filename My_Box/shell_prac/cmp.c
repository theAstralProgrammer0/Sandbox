#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int res;
	char *err_msg, *match_msg, *pmatch_msg, *nmatch_msg;

	err_msg = "An error occured\n";
	match_msg = "The strings are a match\n";
	nmatch_msg = "str2 is greater than str1\n";
	pmatch_msg = "str1 is greater than str2\n";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s str1 str2\n", argv[0]); 
		exit(22);
	}

	res = strcmp(argv[1], argv[2]);


	if (res == 0)
		write(STDOUT_FILENO, match_msg, strlen(match_msg));
	else if (res > 0)
	{
		write(STDOUT_FILENO, pmatch_msg, strlen(pmatch_msg));
		exit(res);
	}
	else if (res < 0)
	{
		write(STDOUT_FILENO, nmatch_msg, strlen(nmatch_msg));
		exit(res);
	}
	else
	{
		write(STDERR_FILENO, err_msg, strlen(err_msg));
		exit(res);
	}
	return (0);
}
