#include "main.h"

/**
 * _strcmp - comparing two strings
 *
 * Return: 0 if the stings are equal, 15 or -15 if different
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			result = 0;
		}
		else if (s1[i] < s2[i])
		{
			result = -15;
		}
		else if (s1[i] > s2[i])
		{
			result = 15;
		}
	}
	return (result);
}
