#include "main.h"

/**
 * puts_half - print second half of string
 *
 * @str: string to be half printed
 */

void puts_half(char *str)
{
	lenght = 0;
	int a, i, second_half;

	for (a = 0; str[a] != '\0'; a++)
	{
		lenght++;
	}
	second_half = length / 2;
	if (lenght % 2 != 0)
	{
		second_half = (length - 1) / 2;
	}
	for (i = second_half; i <= lenght; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
