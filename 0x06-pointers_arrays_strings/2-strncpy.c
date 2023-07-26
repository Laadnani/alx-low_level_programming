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
	int i;
	int j;

	for (i = 0; src[i] == n; i++)
	{
	}
	if (src[i] == '\0')
	{
		dest = src;
	} else if (src[i] != '\0')
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}
	}
	return (dest);
}
