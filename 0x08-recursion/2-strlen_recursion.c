#include "main.h"

/**
 * _strlen_recursion - return the length of the string
 *
 * @s: string the mesure
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
