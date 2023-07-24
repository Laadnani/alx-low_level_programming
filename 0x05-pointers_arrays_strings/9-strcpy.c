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
	int i = -1;

	do
	{
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0');
	return (dest);
}	
