#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum the arguments
 * @n: number of args avaiables
 * Return: sum of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x;
	unsigned int result = 0;

	va_list(sum);
	va_start(sum, n);

	if (n || n != 0)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(sum, unsigned int);
			result += x;
		}
		va_end(sum);
		return (result);
	}
	return (0);
}
