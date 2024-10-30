#include "main.h"

/**
 * puts_half - print the half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int len;
	int start;

	start = 0;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	while (start < len)
	{
		len--;
		start++;
	}
	while (str[len] != '\0')
	{
		len++;
		_putchar(str[len]);
	}
	_putchar('\n');
}
