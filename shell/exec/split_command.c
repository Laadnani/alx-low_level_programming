#include "main.h"

/**
 * split_command - sprlit the string given
 * @argc: command count
 * @argv: string of command to split
 * Return: 0 upen success or -1 with perror message
 */

int split_command(char *str, char **err)
{
	char *p[BUFFER];
	char d[] = " ";
	int j = 0;
	p[j] = strtok(str, d);

	if (p[0] != NULL)
	{
		if (strcmp(p[0], "ls") == 0)
		{
			printf("comman checked and found\n");
			return (0);
		}
		else 
		{
			*err = strerror(errno);
			printf("command checked but not found\n");
			return (1);
		}
	}
	while (p[j] != NULL)
	{
		p[j] = strtok(NULL, d);
		j++;
	}	
	return (-1);
}
