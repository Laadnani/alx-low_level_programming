#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - retrun a poinnter
 * @b: checked int
 * Return: pointer to b
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
