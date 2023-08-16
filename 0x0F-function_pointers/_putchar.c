#include "function_pointers.h"
#include <unistd>

/**
 * _putchar - mimic putchar function
 * @c: pointer to the printed char
 * Return: print the ASCII character
 */

int _putchar(char *c)
{
	return(write(1, &c, 1));
}
