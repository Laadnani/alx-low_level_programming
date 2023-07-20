#include "main.h"

/**
 * print_line - printing lineees
 *
 * @n: how many time the line will be printed
 *
 * Return: always 0
 */
void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
