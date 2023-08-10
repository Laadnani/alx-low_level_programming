#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings up to n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 * Return: concatenated strings s1 and s2, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int ik, jk;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ik = 0; s1[ik] != '\0'; ik++)
	;
	for (jk = 0; s2[jk] != '\0' && jk < n; jk++)
	;
	c = malloc(sizeof(char) * (ik + jk + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (; s1[i] != '\0'; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		c[i + j] = s2[j];
	}
	c[i + j] = '\0';
	return (c);
}
