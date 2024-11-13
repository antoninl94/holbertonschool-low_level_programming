#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allcate memory
 * @b: the variable type that must be allocated
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	
	return (i);
}
