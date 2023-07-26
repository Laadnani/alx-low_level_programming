#include "main.h"

/**
 * *_strncpy - copy a sting till n char
 *
 * @dest: destination of cpied string
 * @src: source of the copied string
 * @n: number of character copied
 * Return: returning the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] = n; j++)
	{
		dest[i + j] = src[j];
	}
	return (*dest);
}
