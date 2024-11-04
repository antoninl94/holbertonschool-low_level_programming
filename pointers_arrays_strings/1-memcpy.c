#include "main.h"

/**
 * _memcpy - copy the value of certain bytes
 * @dest: the string that will be overwrited
 * @src: the value to be copied
 * @n: where the copying will start
 * Return: the array modified
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
