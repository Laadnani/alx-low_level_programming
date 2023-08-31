#include "main.h"

/**
 * flip_bits - get the number of bits flipped from n till m
 * @n: starting bit
 * @m: fisnihe line
 * Return: ditance from start till end
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int distance = 0;

	while (xor_result > 0)
	{
		distance += xor_result & 1;
		xor_result >>= 1;
	}
	return (distance);
}
