#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate mem for an array
 *
 * @nmemb: array popu
 * @size: size of the array / number of popu
 * Return: array of size size of nmemb popu
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	c = malloc(size * nmemb);
	if (size == 0 ||nmemb == 0 || c == NULL)
	{
		c = NULL;
	}
	return (c);
}
