#include "main.h"

/**
 *
 */
void print_rev(char *s)
{
	char beg[1];

	while ('\0' > beg)
	{
		s--;
		_putchar(*s);
	}
	_putchar(*s);
}
