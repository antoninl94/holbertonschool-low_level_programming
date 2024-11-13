#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of int
 * @min: number minimum
 * @max: number max
 * Return: array otherwise NULL if it fail
 */

int *array_range(int min, int max)
{
	int *ar;
	int i = 0, size = max - min + 1;

	if (min > max)
		return (NULL);
	ar = malloc(size * sizeof(int) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
