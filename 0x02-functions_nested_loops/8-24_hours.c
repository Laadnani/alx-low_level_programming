#include "main.h"
/**
 * jack_bauer - explosion point
 *
 * Result: always 0
 */
void jack_bauer(void)
{
	int f_hour;
	int s_hour;
	int f_min;
	int s_min;

	for (f_hour = 0; f_hour <= 2; a++)
	{
		for (s_hour = 0; s_hour <= 9; s_hour++)
		{
			if ((f_hour <= 1 && s_hour <= 9) || (f_hour <= 2 && s_hour <= 3))
			{
				for (f_min = 0; f_min <= 5; f_min++)
				{
					for (s_min = 0; s_min <= 9; s_min++)
					{
						_putchar(f_hour + '0');
						_putchar(s_hour + '0');
						_putchar(':');
						_putchar(f_min + '0');
						_putchar(s_min + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
