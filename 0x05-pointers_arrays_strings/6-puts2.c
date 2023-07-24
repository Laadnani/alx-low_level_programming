#include "main.h"

/**
 * puts2 - print every other charac
 *
 * @str: char to be printed
 */

void puts2(char *str)
{
	while (str != '\0')
	{
		if (str % 2 != 0)
		{
			continue;
		}
		_putchar(*str);
		str++;
	}
}
