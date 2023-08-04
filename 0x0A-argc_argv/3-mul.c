#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print the multiplication of 2 args
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		int  sum;
		int a = atoi(argv[1])
		int b = atoi(argv[2]);

		sum = a * b;
		printf("%d\n", sum);
		return (0);
}
