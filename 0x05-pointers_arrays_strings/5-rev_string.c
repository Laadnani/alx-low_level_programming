#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string chars to be printed in reverse
 */

void rev_string(char *s)
{
	int one = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++
	}
	for (j = 0; j < i; j++)
	{
		i--;
		one = s[j];
		s[j] = s[i];
		s[i] = one;
	}
}
