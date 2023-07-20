#include "main.h"

/*
 * print_numbers - print numbers from 0 till 9
 */

void print_numbers(void)
{
	int i;
	for (i = 48; i <= 57; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
