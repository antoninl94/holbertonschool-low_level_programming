#include "main.h"

/**
 * print_square - print a diagonal depending on n
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(35);
			}
		_putchar(35);
		_putchar('\n');
		}
	}
}