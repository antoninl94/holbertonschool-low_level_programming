#include "main.h"

/**
 * _strpbrk - locate a char in a string
 * @accept: the string to compare
 * @s: the string to be compared
 * Return: s at the first occurence in *s
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		if (accept[j] == *s)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
