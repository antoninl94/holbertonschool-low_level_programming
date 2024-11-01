#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: the string to be appended
 * @dest : the string to append
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0' - 1; i++);
	for (j = 0; dest[j] != '\0'; j++, i++)
	{
		src[i] = dest[j];
	}
	src[i] = '\0';
	return (dest);
}
