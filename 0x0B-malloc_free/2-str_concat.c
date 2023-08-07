#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - entry point
 * @s1: first string to concat
 * @s2: second string to concat
 * Return: string concat of S1 and S2
 */
char *str_concat(char *s1, char *s2)
{
	int mem1;
	int mem2;
	char *i;
	int _wrt;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	for (mem1 = 0; s1[mem1] != '\0'; mem1++)
	;
	for (mem2 = 0; s2[mem2] != '\0'; mem2++)
	;
	i = malloc((mem1 + mem2) * sizeof(char) + 1);
	for (_wrt = 0; _wrt <= (mem1 + mem2); _wrt++)
	{
		if (_wrt < mem1)
		{
			i[_wrt] = s1[_wrt];
		}
		else
		{
			i[_wrt] = s2[_wrt - mem1];
		}
	}
	i[_wrt] = '\0';
	return (i);
}
