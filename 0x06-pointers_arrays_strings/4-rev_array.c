#include "main.h"

/**
 * reverse_array - reverse the index on an array
 * @a: array toittirate from
 * @n: integer in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
