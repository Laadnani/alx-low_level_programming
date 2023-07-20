include "main.h"

/**
 * _isupper - check if characters are uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
