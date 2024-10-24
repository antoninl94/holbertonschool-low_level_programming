#include "main.h"
/**
 * print_alphabet - function to print alphabet
 * @ch: argument
 * Return: nothing
 */
void print_alphabet(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
