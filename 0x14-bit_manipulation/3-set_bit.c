#include "main.h"

/**
 * set_bit - set a bit 1 to a giver number on given index
 * @n: number given
 * @index: index to set 1 into
 * Return: 1 on success or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		*n |= (1UL << index);
		return (1);
	}
	return (-1);
}
