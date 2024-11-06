#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character to locate un the string *s
 * Return: string if occurence otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
		return ('\0');
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
