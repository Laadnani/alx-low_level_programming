#include "main.h"

/**
 * is_prime_number - find s prime number
 *
 * @n: number to define as prime or not
 * Return: 1 for prime numbers otherwise 0
 */

int helper_function(int x, int i);
int is_prime_number(int x)
{
	if (x <= 1)
		return (0);
	else if (x == 2)
		return (1);
	return helper_function(x, 3);
}

int helper_function(int x, int i)
{
	if (x <= 1)
		return (0);
	else if (x % 2 == 0)
		return (0);
	else if (x % i == 0)
		return (0);
	else if (i * i >  x)
		return (1);
	return helper_function(x, i + 2);
}
