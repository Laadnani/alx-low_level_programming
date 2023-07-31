#include "main.h"

/**
 * *_strchr - search for a char in a string
 *
 * @s: string to search in
 * @c: char to search for
 * Return: rest of the string if c is found or Null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		s = s + i;
	}
	return (s);
}
