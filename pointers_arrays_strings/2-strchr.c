#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character to locate un the string *s
 * Return: string if occurence otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	if (c == '\0')
		return (s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
