#include "main.h"
/**
 * jack_bauer - explosion point
 *
 * Result: always 0
 */
void jack_bauer(void)
{
	int min;
	int sec;

	for (min = 0; min <= 23; min++)
	{
		for (sec = 0; sec <= 59; sec++)
		{
			if (min < 10)
			{
				_putchar('0');
			}
			_putchar(min);
			_putchar(':');
			if (min < 10)
			{
				_putchar('0');
			}
			_putchar(sec);
		}
	}
}
