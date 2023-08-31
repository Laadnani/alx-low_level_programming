#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints chars
 * @c: char to print
 * Return: printed char
 */

unsigned long int _putchar(char s)
{
	return(write(1, &s, 1));
}
