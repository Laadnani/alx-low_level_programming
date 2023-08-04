#include <stdio.h>
#include "main.h"

/**
 * main - prints the file/program file
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
