#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of array diaglonals
 *
 * @a: array to loop onto
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int first = 0;
	int second = 0;

	for (i = 0; i < size; i++)
	{
		first = first + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		second += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", first, second);
}
