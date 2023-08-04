#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the ASCII value of C
 *
 * @c: character ro print
 * Return: returning ASCII value of C
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
