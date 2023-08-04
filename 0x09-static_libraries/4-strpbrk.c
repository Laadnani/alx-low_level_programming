#include "main.h"

/**
 * *_strpbrk - scans a sting for a first occurance of any charac
 * @s: scanned string
 * @accept: characs to search for
 * Return: pointer to 1st char s that matches or Null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
