#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @num: number to print the last digit of
 *
 * Return: value of the last digit of num
 */
int print_last_digit(int num)
{
	int r;

	r = num % 10;
	if (r < 0)
	{
		r = r *-1;
	}
	_putchar(r + '0');
	return (r);
}
