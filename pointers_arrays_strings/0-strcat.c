#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: the string to be appended
 * @dest : the string to append
 * Return: the result of the concatenation
 */
char *_strcat(char *dest, char *src)
{
	char *dest0 = dest;

	while (*dest)
	{
		++dest;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest0);
}
