#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allcate memory
 * @b: the variable type that must be allocated
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
