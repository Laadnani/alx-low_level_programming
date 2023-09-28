#include "main.h"

/*
 * putchar - putchar col
 * @s: char to print
 * Return: printed char
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}
