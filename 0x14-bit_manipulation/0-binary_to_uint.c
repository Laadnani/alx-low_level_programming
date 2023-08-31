#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string to convert
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int y = 0;
	unsigned int base = 1;
	unsigned int res = 0;
	unsigned int i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	for (y = i - 1; y >= 0; y--)
	{
		res += (b[y] - '0') * base;
		base *= 2;
	}
	return (res);
}
