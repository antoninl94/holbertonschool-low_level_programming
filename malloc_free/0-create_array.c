#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of char
 * @size: the size of the array
 * @c: the character to print
 * Return: NULL if the size = 0 or if it fail otherwise return char
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char) * size);
	ar[size] = c;

	for (i = 0; i < size; i++)
	{
		if (size == 0)
			return (NULL);
	}

	return (ar);
}
