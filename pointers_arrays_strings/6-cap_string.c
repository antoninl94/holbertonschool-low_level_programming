#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: the string to capitalise
 * Return: the result of capitalization
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int next = 1;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		*ptr == ',' || *ptr == ';' || *ptr == '.' ||
		*ptr == '!' || *ptr == '?' || *ptr == '"' ||
		*ptr == '(' || *ptr == ')' || *ptr == '{' ||
		*ptr == '}' || *ptr == '-')
		{
			next = 1;
		}
		else if (next == 1 && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
			next = 0;
		}
		else
		{
			next = 0;
		}
		ptr++;
	}
	return (str);
}
