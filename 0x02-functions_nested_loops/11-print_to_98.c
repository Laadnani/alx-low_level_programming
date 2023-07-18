#include "main.h"
/**
 * print_to_98 - entry point
 *
 * Return: Void
 */
void print_to_98(int n)
{
	int val;

	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (val = n; val >= 98; val--)
		{
			if (val > 100)
			{
				_putchar((val / 100) + '0');
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar((val / 10) + '0');
			_putchar((al % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (val = n; val <= 98; val++)
		{
			_putchar((val / 10) + '0');
			_putchar((val % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
