#include "function_pointers.h"

/**
 * print_name - allocate the name to a function
 * @name: char to allocate
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
