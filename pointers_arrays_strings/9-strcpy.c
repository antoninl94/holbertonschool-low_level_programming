#include "main.h"

/**
 * _strcpy - copy the string pointed to by src in dest
 * @src: the one to be copied
 * @dest: the destination of the copy
 * Return: the result of the copy
 */
char *_strcpy(char *dest, char *src)
{
	int end;

	end = 0;

	while (src[end] != '\0')
	{
		dest[end] = src[end];
		end++;
	}
	return (dest);
}
