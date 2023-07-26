#include "main.h"

/**
 * *_strncat - copy a sting till n char
 *
 * @dest: destination of cpied string
 * @src: source of the copied string
 * @n: number of character copied
 * Return: returning the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
