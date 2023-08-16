#include "calc.h"
#include <stddef.h>

/**
 * op_add - adition operation
 * @a: first arg
 * @b: second arg
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction operation
 * @a: first arg
 * @b: second arg
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: first arg
 * @b: second arg
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: first arg
 * @b: second arg
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo operation
 * @a: first arg
 * @b: second arg
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
