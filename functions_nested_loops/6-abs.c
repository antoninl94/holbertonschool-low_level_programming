#include "main.h"

/**
 * _abs - print the absolute value of an integer
 * @c: the character
 *
 * Return: -c is the negation of the nagitive result
 * (wich make it positive)
 * otherwice the result will be the number itself
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
