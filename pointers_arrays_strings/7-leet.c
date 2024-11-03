#include "main.h"

/**
 * leet - convert string in 1337 code
 * @str: the string to convert
 * Return: string converted
 */
char *leet(char *str)
{
	char *ptr = str;
	int tl[256] = {0};

	tl['a'] = '4';
	tl['A'] = '4';
	tl['e'] = '3';
	tl['E'] = '3';
	tl['o'] = '0';
	tl['O'] = '0';
	tl['t'] = '7';
	tl['T'] = '7';
	tl['l'] = '1';
	tl['L'] = '1';

	while (*ptr != '\0')
	{
		if (tl[(unsigned char)*ptr])
	{
		*ptr = tl[(unsigned char)*ptr];
	}
		ptr++;
	}
	return (str);
}
