#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings to the console
 * @separator: separator char
 * @n: number of arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep = "";

	va_list(string);
	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(string, const char*);

		if (!separator)
		{
			separator = sep;
		}
		if (!str)
		{
			printf("(nil)%s", separator);
			continue;
		}
		printf("%s%s", str, separator);
	}
	printf("\n");
	va_end(string);
}
