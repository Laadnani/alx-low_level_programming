#include "main.h"

/**
 * get_bit - get the bit of a number in binary at index index
 * @n: number to check in binary
 * @index: index bit to print
 * Return: binary bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned long int rem = 1;
	unsigned long int bin = 0;
	unsigned long int iter = 0;

	while (n > 0)
	{
		rem = n % 2;
		bin += rem * i;
		n /= 2;
		i *= 10;
		iter++;
	}
	if (index <= iter)
	{
		bin = bin >> index;
		return (bin & 1);
	} else
		return (-1);
}
