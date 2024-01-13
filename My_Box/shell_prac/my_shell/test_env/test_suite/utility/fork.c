#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
  * 1. Create a child process
  * 2. Print the pid and ppid of the calling and child processes
  * 3. Handle errors and failures
  */

int main(void)
{
	pid_t child;

	child = fork();
	if (child == -1)
	{
		fprintf(stderr, "Fork failed\n");
		exit(EXIT_FAILURE);
	}

	else if (child == 0)
	{
		execve();
	}
	else
	{
		waitpid(

