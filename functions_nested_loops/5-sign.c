#include "main.h"

/**
 * print_sign - display if n is greater, equal
 * or less than 0
 *
 * @n: character n
 *
 * Return: 0 if 0, 1 if > 0, -1 if < 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
