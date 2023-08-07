#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - entry point
 *
 * @*str: strig pointer duplicate
 * Return: duplicate of the strinc if enough memory
 */

char *_strdup(char *str)
{
	int _size = 0;
	char *i;
	(void) *str;

	while (*str++)
	{
		_size++;
	}
	i = malloc(sizeof(char) * _size);
	return (i);
}
