#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return the index of the first element
 * for wich the cmp function does not return 0
 * @array: the array
 * @size: size of the array
 * @cmp: the function used to compare array
 * Return: -1 if error otherwise return index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
