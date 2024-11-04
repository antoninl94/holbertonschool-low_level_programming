#include "main.h"

/**
 * _memset - replace value of n bytes in *s
 * @s: the string to be modified
 * @b: the value to insert in *s
 * @n: the number of bytes to be modified
 * Return: the modified array s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
