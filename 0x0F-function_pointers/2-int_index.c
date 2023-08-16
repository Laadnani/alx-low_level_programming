#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: array of int to work on
 * @size: size of the array -1
 * @cmp: function to work with
 * Return: index of array int where cpn is true or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int count = 0;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			count = -1;
			break;
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				count = i;
				break;
			}
			count = -1;
		}
	}
	return (count);
}
