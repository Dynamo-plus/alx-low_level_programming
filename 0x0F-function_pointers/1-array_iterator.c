#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate through an array
 * @array: array parameter
 * @size: size of the array
 * @action: pointer pointing to functions
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
