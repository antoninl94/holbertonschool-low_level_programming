#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * which is containing a copy of the string given in parameter.
 * @str: the string to copy
 * Return: the pointer copy of the string str, if str = NULL -> return NULL
 */

char *_strdup(char *str)
{
	int len = 0;
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		ptr[i] = str[i];

	return (ptr);
}
