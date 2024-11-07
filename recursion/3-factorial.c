#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: the number that we want the factorial
 * Return: the factorial, -1 if n less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
