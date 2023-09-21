#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main()
{
	int  i;
	pid_t id;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		id = fork();
		if (id != 0)
		{
			wait(NULL);
		}
		if (id == 0)
		{
			execve(argv[0],argv,NULL);
		}
	}
	return (0);
}
