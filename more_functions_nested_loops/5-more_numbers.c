#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int n, o;

	for (n = '0'; n <= '9'; n++)
	{
		for (o = 0; o <= 14; o++)
		{
			while (o > 9 )
			{
				_putchar(o / 10 + 48);
			}
		_putchar(o % 10 + 48);
		}
	}
	_putchar('\n');
}
