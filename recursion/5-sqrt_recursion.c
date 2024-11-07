#include "main.h"

/**
 * _sqrt_recursion - return the natural square root
 * @n: the base number
 * Return: -1 if n is negative otherwise the square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == i * i)
	{
		return (i);
	}
	else
	{
	return (_sqrt_recursion(i + 1));
	}
}
