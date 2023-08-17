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
	char *nil = "(nil)";

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
			str = nil;
		}
		if (i == n - 1)
		{
			printf("%s", str);
			break;
		}
		printf("%s%s", str, separator);
	}
	printf("\n");
	va_end(string);
}
