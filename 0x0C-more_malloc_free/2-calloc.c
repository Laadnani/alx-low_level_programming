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

	if (size == 0 || nmemb == 0)
	{
		return(NULL);
	}
	c = malloc(size * nmemb);
	if (c == NULL)
	{
		return(NULL);
	}
	return (c);
}
