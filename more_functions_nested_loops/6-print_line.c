#include "main.h"

/**
 * print_line - will print a character '_' depending on n
 * @n: n times of character '_'
 */
void print_line(int n)
{
	char us = 95;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (--n >= 0)
		{
			_putchar(us);
		}
		_putchar('\n');
	}
}
