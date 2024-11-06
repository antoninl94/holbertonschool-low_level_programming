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
	int sum1;
	int *ptr = a;

	for (i= 0; i < size; i++)
	{
		sum1 += *(ptr + i * size + i);
	}

	printf("%d\n", sum1);
}
