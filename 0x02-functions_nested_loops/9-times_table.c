#include "main.h"
/**
 * times_table - entry point
 *
 * Return: time table
 */
void times_table(void)
{
	int a;
	int b;
	int val;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			val = a * b;
			if (b == 0)
			{
				_putchar(b + '0');
			}
			else if (val < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(val + '0');
			}
			else if (val >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
