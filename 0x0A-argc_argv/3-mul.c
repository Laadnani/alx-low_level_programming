#include <stdlib.h>
#include "main.h"

/**
 * main - print the multiplication of 2 args
 *
 * @argc: argument count
 * @argv: argument vector
 * Result: always 0
 */
int main(int argc, char *argv[])
{
	int  sum;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc == 2)
	{
		sum = a * b;

		if (sum < 10)
		{
		_putchar(argv[1]);
		} 
		return (0);
	}
	printf("Error\n");
	return (1);
}
