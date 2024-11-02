#include "main.h"

/**
 * leet - convert string in 1337 code
 * @str: the string to convert
 * Return: string converted
 */
char *leet(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == 65 || *ptr == 97)
		{
			*ptr = 52;
		}
		else if (*ptr == 69 || *ptr == 101)
		{
			*ptr = 51;
		}
		else if (*ptr == 79 || *ptr == 111)
		{
			*ptr = 48;
		}
		ptr++;
	}
	return (str);
}
