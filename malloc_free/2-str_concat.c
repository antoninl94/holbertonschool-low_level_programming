#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function to concatenate 2 strings
 * @s1: first string
 * @s2: seconde string
 * Return: the final string or NULL if it failed
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr = s1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	ptr = malloc(sizeof(char));
	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0')
		*s1++ = *s2++;
	
	return (ptr);
}
