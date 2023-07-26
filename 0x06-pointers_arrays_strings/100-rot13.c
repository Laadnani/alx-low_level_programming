#include "main.h"

/**
 * *rot13 - enconde the characters in a sting
 *
 * @s: string to be encoded
 * Return: encoded ROT-13 string
 */

char *rot13(char *s)
{
	int i, j;
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == norm[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
