#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the function will print the sum of the two
 * diagonals of a square matrix integers
 * @a: the name of the array
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i= 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
