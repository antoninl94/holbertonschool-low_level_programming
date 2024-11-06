#include "main.h"

/**
 * _puts_recursion - function that will print a string
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	if (*s == '\0')
		_putchar('\n');
}
