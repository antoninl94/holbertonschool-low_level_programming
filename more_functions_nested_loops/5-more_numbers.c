#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int n, o, p;

	for (n = '0'; n <= '9'; n++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			_putchar(o);
		}
		for (p = 10; p <= 14; p++)
		{
			_putchar(p / 10 + 48);
			_putchar(p % 10 + 48);
		}
	_putchar('\n');
	}
}
