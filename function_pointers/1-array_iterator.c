#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function as a parameter on each element
 * of an array
 * @array: the array
 * @size: size of the array
 * @action: the function needed to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
