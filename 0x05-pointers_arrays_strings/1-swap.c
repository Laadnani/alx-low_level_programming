#include <stdio.h>

/**
 * swap_int - swap 2 int using their pointers
 *
 * @a: int to be swapped with int b
 *
 * @b: int to be swapped with int a
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	int *a = *b;
	int *b = c;
}
