#include "main.h"

/**
 * print_diagonal - print a diagonal depending on n
 * @n: number of lines
 */
void print_diagonal(int n)
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
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
		_putchar(92);
		_putchar('\n');
		}
	}
}
