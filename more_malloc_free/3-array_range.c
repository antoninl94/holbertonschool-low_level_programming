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
	int i = min, j = 0, size = max - min;

	if (min > max)
		return (NULL);
	ar = malloc(size * sizeof(int) + 1);
	if (ar == NULL)
		return (NULL);
	while (j <= max)
	{
		ar[j] = i;
		i++;
		j++;
	}
	return (ar);
}
