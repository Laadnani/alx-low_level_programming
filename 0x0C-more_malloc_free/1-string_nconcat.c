#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concat 2 string till n bite of s2
 *
 * @s1: first string to concat
 * @s2: second string to concat
 * @n: number of bytes to concat from s2
 * Return: concat strings s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int ik, jk;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (ik = i ; s1[ik] != '\0'; ik++)
	;
	for (jk = 0; s2[jk] != '\0'; jk++)
	;
	c = malloc(ik + n + 1);

	if (c == NULL)
	{
		return (NULL);
		exit()
	}
	for (; s1[i] != '\0'; i++)
	{
		c[i] = s1[i];
	}
	for (; j <= n; j++)
	{
		c[i] = s2[j];
		i++;
	}
	c[i] = '\0';
	return (c);
}
