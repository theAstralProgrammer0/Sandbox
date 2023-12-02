#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t pid = getpid();
	pid_t ppid = getppid();

	printf("pid is %u\n", pid);
	printf("ppid is %u\n", ppid);
	return (0);
}
