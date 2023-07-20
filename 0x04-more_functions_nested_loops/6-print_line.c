#include "main.h"

/**
 * print_line - printing lineees
 *
 * Return: always 0
 */
void print_line(void)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_' + '0');
			i++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
