#include "main.h"

/**
 * clear_bit - set a bit 0 to a giver number on given index
 * @n: number given
 * @index: index to set 0 into
 * Return: 1 on success or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}	
	*n &= ~(1UL << index);
	return (1);
}
