#include <stdlib.h>
#include "main.h"

/**
 * free_grid - this function will free a 2d array
 * @grid: the array
 * @height: the number of line to free
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
