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
	int *p;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	i = max - min + 1;
	p = malloc(sizeof(int) * i);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; min <= max; j++)
	{
		p[j] = min++;
	}
	return (p);
}
