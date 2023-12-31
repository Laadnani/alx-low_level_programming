#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints the number
 * @separator: char between the printed numbers
 * @n: number of aguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(args);
	va_start(args, n);

	if (n)
	{
		for (i = 0; i < n ; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", va_arg(args, unsigned int));
				break;
			}
			if (!separator)
			{
				printf("%d", va_arg(args, unsigned int));
				continue;
			}
			printf("%d%s", va_arg(args, unsigned int), separator);
		}
	va_end(args);
	}
}
