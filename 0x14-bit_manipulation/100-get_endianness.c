#include "main.h"

/**
 * get_endianness - check which endian current pc works with
 * Return: 1 for little endian and 0 for big endian
 */

int get_endianness(void)
{
	int values = 5;
	unsigned char *ptr = (unsigned char *)&values;

	return (*ptr);
}
