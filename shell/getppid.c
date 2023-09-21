#include  <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	printf("current PID: %d\n", getppid());
	return(0);
}
