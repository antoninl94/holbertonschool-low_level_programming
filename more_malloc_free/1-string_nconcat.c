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
	unsigned int size1 = 0, size2 = 0, k = 0;
	unsigned int l = 0;

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] !=  '\0')
		size2++;
	if (n > size2)
		n = size2;

	ptr = malloc(sizeof(char) * (size1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (k < size1)
	{
		ptr[k] = s1[k];
		k++;
	}
	while (l < n)
	{
		ptr[k] = s2[l];
		l++;
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
