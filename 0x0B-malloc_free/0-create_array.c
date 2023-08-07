#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create ana array of chars
 *
 * @size: size of the array
 * @c: content of the array
 * Return: array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *i =  malloc(size);

	if (size == 0 || i == 0)
	{
		return ('\0');
	}
	while (size--)
		i[size] = c;
	return (i);
}
