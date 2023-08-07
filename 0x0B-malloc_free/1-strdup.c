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
	int j;
	(void) *str;

	while (*str++)
	{
		_size++;
	}
	i = malloc(sizeof(char) * (_size + 1));
	if (i == 0)
	{
		return ('\0');
	}
	else 
	{
		for (j = 0; j < _size; j++)
			i[j] = str[j];
	}
	return (i);
}
