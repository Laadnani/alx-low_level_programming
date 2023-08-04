#include <unistd.h>
#include "main.h"

/**
 *_putchar - entry point
 *@c: argument
 * Return: ASCII char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
