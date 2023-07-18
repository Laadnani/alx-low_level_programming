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

	for (min = '00'; min <= '23'; min++)
	{
		for (sec = '00'; sec <= '59'; sec++)
		{
			_putchar(min);
			_putchar(':');
			_putchar(sec);
		}
	}
}
