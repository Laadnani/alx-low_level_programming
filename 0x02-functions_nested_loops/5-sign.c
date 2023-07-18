#include "main.h"
/**
 * print_sign - entry point
 *
 * @n: number to be checked
 *
 * Return: 1 if n is > 0, -1 if n is < 0 and 0 if n equal 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		return (-1);
	}
	else
	{
		return (0);
	}
}
