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

	size = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	ar[size] = c;

	return (ar);
}
