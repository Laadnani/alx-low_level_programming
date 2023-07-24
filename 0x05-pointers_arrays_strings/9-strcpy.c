#include "main.h"

/**
 * *_strcpy - copy a sting from one var to another
 *
 * @dest: var to be paste into
 * @src: var to be copied
 * Return: Value of dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i =0;
	int j;

	while (*src != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}	
