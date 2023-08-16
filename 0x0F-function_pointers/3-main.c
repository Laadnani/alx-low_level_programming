#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *@argc: input arguments
 *@argv: arguments vectors
 *Return: valus of operation on num1 and num 2 or Null
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (!b && ((argv[2][0] == '/') || (argv[2][0] == '%')))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", op_func(a, b));
	return (0);
}
