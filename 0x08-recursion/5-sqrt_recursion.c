#include "main.h"

/**
 * _sqrt_recursion - return natural square root of a number
 *
 * @x: int to find
 * Return: Natural sqrt of x
 */

int _sqrt_recursion(int x)
{
	int sum;
	int y;

	while (x > 0)
	{
		y = 1;
		sum = 1 + _sqrt_recursion(x - (y + 2));
	}
	if (x == 0)
	{
		return (sum - _sqrt_recursion(x - (y + 2)));
	} else
		return (-1);
}
