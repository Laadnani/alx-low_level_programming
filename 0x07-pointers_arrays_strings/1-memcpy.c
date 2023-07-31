#include "main.h"

/**
 * *_memcpy - copies a string into an array
 *
 * @dest: destination of the copied string
 * @src: source of the copied string
 * @n: number of strings copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
