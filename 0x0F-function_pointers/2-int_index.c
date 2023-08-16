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
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
