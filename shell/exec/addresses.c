#include <stdio.h>
#include <unistd.h>
extern char **environ;

int main(int ac, char **av, char **env)
{
	(void) ac;

	printf("address of environ is %p \n", environ);
	printf("address of env is %p \n", (void *) &env);
	return (0);
}
