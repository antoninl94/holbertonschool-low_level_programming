#include "main.h"

/**
 * print_triangle - print a triangle depending on n
 * @n: number of lines
 */
void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = n - 1; j > i; j--)
			{
				_putchar(32);
			}
			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
