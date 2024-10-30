#include <stdio.h>
#include "main.h"

/**
 * print_array - will print the array value in order
 * @a: the array
 * @n: the number of array
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
	putchar('\n');
}
