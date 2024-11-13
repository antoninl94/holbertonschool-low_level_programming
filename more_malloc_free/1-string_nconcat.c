#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - This function concatenate n char of the string s2 in s1
 * @s1: first string
 * @s2: second string to concatenate
 * @n: number of bytes of the s2 string to concatenate
 * Return: a pointer on the string concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int l = 0;
	unsigned int m = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] !=  '\0')
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
	while (l != n)
	{
		ptr[k] = s2[l];
		l++;
		k++;
	}

	return (ptr);
}
