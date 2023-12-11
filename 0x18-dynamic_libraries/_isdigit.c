#include "main.h"

/**
 * _isdigit - check if the char is a digit or not
 *
 * @c: char to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
