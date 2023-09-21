#include "main.h"

/**
 * def
 *
 * Return : 0 on success error type otherwise
 */

int main(void)
{
	size_t n = 20;
	char *buf = NULL;
	int check;
	char *err = NULL;
	
	while (1) 
	{
		printf("$");
		getline(&buf, &n, stdin);
		if (strcmp(buf, "exit") == 0)
		{
			printf("exiting\n\n\n.....\nDisconnected\n");
			continue;
		}
		check = split_command(buf, &err);
		if (check == -1 || check == 1)
			{
				printf("command failed\n%s\n", err);
				printf("need to implement a loopt and restart the main here \n");
			}
		else
		{
			printf("command checked\n");
			printf("need to implement a fork and execv command here");
		}
		printf("%s\n", buf);
	}
	free(buf);
	return (0);
}
