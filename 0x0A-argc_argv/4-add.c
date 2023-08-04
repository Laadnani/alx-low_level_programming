#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - return the sum of the given arguments
 *
 * @argc: argumrnt count
 * @argv: argument vector array
 * Return: sum of argumnents OR 0 OR Error
 */
int main(int argc, char *argv[])
{
	char *c;
	int sum = 0;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
