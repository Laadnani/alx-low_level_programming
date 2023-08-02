#include "main.h"

/**
 * is_prime_number - find s prime number
 *
 * @n: number to define as prime or not
 * @i: modulus divider
 * Return: value of helper function
 */

int helper_function(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	return (helper_function(n, 3));
}
/**
 * helper_function - finds the prime number using modulus
 *
 * @i:number to devine n on to find modulus 0
 * @n: given number
 * Return: 1 if number is prime 0 otherwise
 */
int helper_function(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % 2 == 0)
		return (0);
	else if (n % i == 0)
		return (0);
	else if (i * i >  n)
		return (1);
	return (helper_function(n, i + 2));
}
