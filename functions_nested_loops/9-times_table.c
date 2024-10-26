#include "main.h"

/**
 * times_table - print the 9x9 table
 */
void times_table(void)
{
	int i;
	int j;
	int num;

	for (i = 0 ; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			num = i * j;
			_putchar(',');
			_putchar(' ');
			if (num <= 9)
			{
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
