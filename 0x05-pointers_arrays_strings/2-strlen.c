#include "main.h"

/**
 * _strlen - returning the length of a string
 *
 * @s: char to find length of
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	_putchar(i + '0');
}
