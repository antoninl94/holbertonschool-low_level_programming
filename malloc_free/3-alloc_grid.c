#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - return a pointer to a 2D array
 * @width: the number of columns
 * @height: the number of lines
 * Return: a pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(width * sizeof(double));
		if (arr == NULL)
			return (NULL);
	}
	return (arr);
}
