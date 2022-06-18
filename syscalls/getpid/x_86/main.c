#include <stdio.h>
#include <unistd.h>
int my_getpid(void);

int main(int argc, char const *argv[])
{
	pid_t pid;

	pid = getpid();
	printf("pid from getpid() %d\n", pid);

	pid = my_getpid();
	printf("pid from my_getpid %d\n", pid);

	return 0;
}