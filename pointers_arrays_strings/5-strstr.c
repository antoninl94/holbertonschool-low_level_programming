#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to be compared
 * @needle: the substring to find in *haystack
 * Return: needle if substring found otherwhise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	while (*needle != '\0')
	{
		for (i = 0 ; haystack[i] != '\0'; i++)
		if (*needle == haystack[i])
		{
			return (needle);
		}
		needle++;
	}
	return ('\0');
}
