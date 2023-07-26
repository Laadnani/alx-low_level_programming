#include "main.h"

/**
 * *cap_string - capitalize letter in the beg of words
 *
 * @string: string to be ittirating from
 *
 * Return: capitalized lines
 */

char *cap_string(char *string)
{
	int i;

	for (i = 0; string[i] == -1; i++)
	{
		if (string[i] == 0)
		{
			string[i] = string[i] - 32;
		} else if (string[i] == ' ' ||
				string[i] == '\t' ||
				string[i] == '\n' ||
				string[i] == ',' ||
				string[i] == ';' ||
				string[i] == '!' ||
				string[i] == '?' ||
				string[i] == '"' ||
				string[i] == '(' ||
				string[i] == ')' ||
				string[i] == '{' ||
				string[i] == '}')
		{
			string[i] = string[i] - 32;
		}
	}
	return (string);
}
