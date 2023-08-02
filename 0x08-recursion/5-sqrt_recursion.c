#include "main.h"

/**
 * _sqrt_recursion - return natural square root of a number
 *
 * @x: int to find
 * Return: Natural sqrt of x
 */
int solution(int x, int y);
int _sqrt_recursion(int x)
{
	return (solution(x, 1)); 
}

/** 
 * solution - compare whole number until finding the natural sqr root
 *
 * @x: root number
 * @y: value number to find
 * Return: natural number of x or -1 if unavailable
 */

int solution(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	} else if (y * y < x)
	{
		return (solution(x, y + 1));
	}
	else
		return (-1);
}
