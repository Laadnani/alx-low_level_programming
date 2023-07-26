#include "main.h"

/**
 * reverse_array - reverse the index on an array
 *
 * @n: integer in the array
 */

void reverse_array(int* a, int n)
{
	int i;
	int j = 0;
	int temp[20];

	for (i = 0; i < n; i++);
	while (i < 0)
	{
		temp[j] = a[i];
		j++;
		i--;
	}
	if (i == 0)
	{
		a = temp;
	}
}
