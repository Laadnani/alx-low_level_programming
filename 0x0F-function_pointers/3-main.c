#include "calc.h"
#include <stdio.h>
/**
 * main - entry point
 *@op: operator of op
 *@num1: first operand
 *@num2: second operand
 *Return: valus of operation on num1 and num 2 or Null
 */

int main(int argc, char *c, char *num1, char *num2)
{
	int a = atoi(num1);
	int b = atoi(num2);

	if (argc != 2)
	{
		printf("Error \n");
		return (98);
	}
	if (((a == 0 || b == 0) && c == "\/") || ((a == 0 || b == 0) && c == "\%"))
	{
		printf("Error \n");
		return(100);
	}
	if (c != op_t.op)
	{
		printf("Error \n");
		return(99);
	}
	return get_op_func(char *c, int *a, int *b);
}
