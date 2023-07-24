#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string chars to be printed in reverse
 */

void rev_string(char *s)
{
	int one = 0;
	int two;

	while (*s != '\0')
	{
		one++;
		s++;
	}
	for (two = one; two >= 0; two--)
	{
		_putchar(*s);
		s--;
	}
}
