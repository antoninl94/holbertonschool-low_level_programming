#include "main.h"

/**
 * puts_half - print the half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int len;
	int half;
	int i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	half = len / 2;

	if (len / 2 != 0)
	{
		for (i = half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len / 2 == 0)
	{
		for (i = half -1; i < len ; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
