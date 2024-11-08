#include "main.h"


/**
 * is_prime_number_aux - test if n is prime number
 * @n: the number to test
 * @i: the number that will test n
 * Return : the result of the test
 */
int is_prime_number_aux(int n, int i)
{
	if (n % 2 == 0)
		return (0);
	else if (n / i != 1)
		return (0);
	else if (n / i == 1 && n / 1 == n)
		return (1);
	else
		return (is_prime_number_aux(n, i + 1));
}

/**
 * is_prime_number - function that return if n is prime number
 * @n: the number that will be tested
 * Return: the result
 */
int is_prime_number(int n)
{
	return (is_prime_number_aux(n, 1));
}
