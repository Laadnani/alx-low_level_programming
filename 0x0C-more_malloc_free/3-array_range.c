#include "main.h"
#include <stdlib.h>

/**
 * *array_range - entry point
 * @min: min value
 * @max: max value
 * Return: array starting from min ending in max
 */

int *array_range(int min, int max)
{
	char *p;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	i = min + max + 1;
	p = malloc(sizeof(int) * i);
	if (!p)
	{
		return(NULL);
	}
	for(j = 0; j < i; j++)
	{
		p[j] = min;
		min++
	}
	return (p);
}
