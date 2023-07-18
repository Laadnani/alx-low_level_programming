#include "main.h"
/**
 * jack_bauer - explosion point
 *
 * Result: always 0
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			if (hour < 10)
			{
				_putchar(0);
			}
			_putchar(min + '0');
			_putchar(':');
			if (min < 10)
			{
				_putchar(0);
			}
			_putchar(sec + '0');
			_putchar('\n');
		}
	}
}
