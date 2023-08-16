#include "function_pointers.h"

/**
 * array_iterator - itterat through an array
 * @array: array to work on
 * @size: size of the array
 * @action: function used on the array
 */

void array_iterator (int *array, size_t size, void (*action) (int))
{
	long unsigned int i;
	
	if (array && size && action)
	{
		for(i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
