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

	if (str == '\0')
	{
		return ('\0');
	}
	for (; _size != '\0'; _size++);
	i = malloc(sizeof(*str) + 1 * _size );
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
