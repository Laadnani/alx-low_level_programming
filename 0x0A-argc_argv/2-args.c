#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments it take
 *
 * @argc: argument count
 * @argv: pointer to arguments vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i > argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
