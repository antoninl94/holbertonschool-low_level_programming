#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the string that will be compared
 * @accept: the char that will be compared with *s
 * return: the number of char == *accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
	}
	return (count);
}
