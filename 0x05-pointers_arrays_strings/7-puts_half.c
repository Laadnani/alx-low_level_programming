#include "main.h"

/**
 * puts_half - print second half of string
 *
 * @str: string to be half printed
 */

void puts_half(char *str)
{
	int length = 0;
	int a;
	int i;
	int second_half;

	for (a = 0; str[a] != '\0'; a++)
	{
		length++;
	}
	second_half = length / 2;
	if (length % 2 != 0)
	{
		second_half = (length - 1) / 2;
	}
	for (i = second_half; i <= lenght; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
