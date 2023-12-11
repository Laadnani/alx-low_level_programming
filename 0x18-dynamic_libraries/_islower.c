#include "main.h"
/**
 * _islower -entry point
 *
 * @c: parameter to be checked
 *
 * Return: 1 when lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
