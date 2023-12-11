#include "main.h"

/**
 * *_strstr - search for a string of char
 *
 * @haystack: haystack of char to search in
 * @needle: string of char to find in haysatck
 * Return: index of the beggining of the need or Null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
