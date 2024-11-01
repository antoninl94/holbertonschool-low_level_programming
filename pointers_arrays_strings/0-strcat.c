#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: the string to be appended
 * @dest : the string to append
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (*dest)
	{
		++dest;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
