#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string to be printed
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
