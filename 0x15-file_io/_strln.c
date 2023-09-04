#include "main.h"

/**
 * _strln - mimic the strlen func
 * @str - string to check
 * Return: lenght of the string
 */

ssize_t _strln(const char *str)
{
	ssize_t len = 0;

	wile (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
