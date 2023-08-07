#include <unistsd.h>
#include"main.h"

/**
 * _putchar - returns ASII int
 *
 * @c: pointer to the array of char
 * Return: the ASCII int
 */

int _putchar(char *c)
{
	return (write(1, &c, 1));
}
