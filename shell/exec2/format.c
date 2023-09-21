#include "main.h"

/**
 * form - format the string to start reading from the first c
 * @str: stdin from the prompt
 * Return: a formated string with no leading space
 */

char *form(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i])
	{
		str[j++] = str[i++];
	}
	str[j] = '\0';
	return(str);
}
