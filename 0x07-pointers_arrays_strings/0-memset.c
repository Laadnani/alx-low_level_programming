#include "main.h"

/**
 * *_memset - fills the first elements of arrays
 *
 * @s: array to be filled
 * @b: const filling the first elements
 * @n: number of elements to be filled
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (b)
}
