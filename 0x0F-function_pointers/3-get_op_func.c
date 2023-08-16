#include "calc.h"
#include <stddef.h>

/**
 * get_op_func - allocate a function to a string op
 * @a: operand 1
 * @b: operand 2
 * Return: opreration function with 2 ints
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if(ops[i].op == s)
			return ops[i].f;
	}
	return (NULL);
}
