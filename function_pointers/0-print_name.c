#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_name - Print a name
 * @name: name of the person
 * @f: function to uppercase or not name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

