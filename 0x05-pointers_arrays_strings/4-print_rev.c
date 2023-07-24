#include "main.h"

/** 
 * print_rev - prints a string in reverse
 *
 * @s: string to be reversed then printed
 */

void print_rev(char *s)
{
	int one = 0;
	int two;

	while (*s != '\0')
	{
		one++;
		s++;
	}
	one--;
	for (two = one; two <= 0; two--)
	{
		_putchar(*s[two]);
	}
	_putchar('\n');
}
