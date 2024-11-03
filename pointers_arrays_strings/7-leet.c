#include "main.h"

/**
 * leet - convert string in 1337 code
 * @str: the string to convert
 * Return: string converted
 */
char *leet(char *str)
{
	char *ptr_a = str;
	char *ptr_e = str;
	char *ptr_o = str;
	char *ptr_t = str;
	char *ptr_l = str;

	while (*ptr_a != '\0' && *ptr_e != '\0' &&
	*ptr_o != '\0' && *ptr_t != '\0' && *ptr_l != '\0')
	{
		if (*ptr_a == 'a' || *ptr_a == 'A' ||
		*ptr_e == 'e' || *ptr_e == 'E' ||
		*ptr_o == 'o' || *ptr_o == 'O' ||
		*ptr_t == 't' || *ptr_t == 'T' ||
		*ptr_l == 'l' || *ptr_l == 'L')
		{
			*ptr_a = '4';
			*ptr_e = '3';
			*ptr_o = '0';
			*ptr_t = '7';
			*ptr_l = '1';
		}
		ptr_a++;
		ptr_e++;
		ptr_o++;
		ptr_t++;
		ptr_l++;
	}
	return (str);
}
