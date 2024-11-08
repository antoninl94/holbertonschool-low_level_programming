#include "main.h"

/**
 * _sqrt_recursion - return the natural square root
 * @n: the base number
 * Return: -1 if n is negative otherwise the square root
 */

int _sqrt_recursion_aux(int n, int i)
{
	if (i * i < 0)
	{
		return (-1);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_recursion_aux(n, i + 1));
	}
}
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_aux(n, 0));
}
