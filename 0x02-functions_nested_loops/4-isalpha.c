#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: parameter to be checked 
 *
 * Return: 1 if the parameter is alphabetic charac or 0 otherwise
 */
int _islpha(int c)
{
	int c;

	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
