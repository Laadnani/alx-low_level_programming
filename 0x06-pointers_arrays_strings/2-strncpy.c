#include "main.h"

/**
 * *_strncpy - copy a string over another string
 *
 * @n: number of char o be copied
 * @dest: var that will hold the copied string
 * @src: var that hold the original string
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
