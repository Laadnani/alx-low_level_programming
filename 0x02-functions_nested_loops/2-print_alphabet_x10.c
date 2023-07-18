#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: no return on Void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	for (i; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}	
}
