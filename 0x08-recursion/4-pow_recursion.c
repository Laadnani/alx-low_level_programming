#include "main.h"

/**
 * _pow_recursion - return the int x to the power y
 *
 * @x: first power
 * @y: power ranger
 * Return: x to the power y or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	int temp;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	temp = x * _pow_recursion(x, (y - 1));
	return (temp);
}
