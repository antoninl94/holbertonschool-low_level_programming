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
	char *ptr;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[m] != '\0')
	{
		ptr[k] = s1[m];
		k++;
		m++;
	}
	while (s2[l] != '\0')
	{
		ptr[k] = s2[l];
		l++;
		k++;
	}

	return (ptr);
}
