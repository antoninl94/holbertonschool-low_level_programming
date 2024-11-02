#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function to reverse the content of an array
 * @a: the array to reverse
 * @n: the size of the array to reverse
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
	}
}
