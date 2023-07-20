#include "main.h"

/**
 * print_line - printing lineees
 *
 * Return: always 0
 */
void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
