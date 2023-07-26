#include "main.h"

/**
 * *rot13 - enconde the characters in a sting
 *
 * @s: string to be encoded
 * Return: encoded ROT-13 string
 */

char *rot13(char *s)
{
	int i;
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\n'; i++)
	{
		char c = s[i];

		if (c >= 'A' && c <= 'Z')
		{
			s[i] = rot[c - 'A'];
		} else if (c >= 'a' && c <= 'z')
		{
			s[i] = rot[c - 'a' + 26];
		}
	}
	return (s);
}
