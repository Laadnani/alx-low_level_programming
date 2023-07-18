#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return;
}
