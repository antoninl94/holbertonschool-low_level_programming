#include "main.h"

/**
 * _strncat - concatenate n bytes of src in dest
 * @src: the string to be concatenate
 * @dest: the string to concatenate
 * @n: the number of byte of src to concatenate
 * Return: the string of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest0 = dest;

	while (*dest)
	{
		++dest;
	}
	while (*src && n--)
	{
		*dest++ = *src++;
	}
	return (dest0);
}
