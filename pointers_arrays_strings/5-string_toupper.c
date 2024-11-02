#include "main.h"

/**
 * string_toupper - convert lowercase string to uppercase
 * @str: string to convert
 * Return: Converted string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 97 && *ptr <= 122)
			*ptr = *ptr - 32;
		ptr++;
	}
	return (str);
}
