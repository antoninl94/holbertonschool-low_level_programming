#include "main.h"

/**
 * _sqrt_recursion_aux - return the natural square root
 * @n: the base number
 * @i: the square root
 * Return: -1 if n is negative or i
 * greater than n otherwise the square root
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
/**
 * _sqrt_recursion - return the natural square root
 * @n: the base number
 * Return: result of the _sqrt_recursion_aux function
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_aux(n, 0));
}
