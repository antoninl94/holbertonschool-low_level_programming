#include "main.h"

/**
 * _strncpy - copy the src string in dest
 * @dest: where the string will be copied
 * @src: the string to be copied
 * @n: the number of char that will be copied
 * Return: the updated dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
