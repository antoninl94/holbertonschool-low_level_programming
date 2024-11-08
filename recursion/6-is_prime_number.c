#include "main.h"


/**
 * is_prime_number_aux - test if n is prime number
 * @n: the number to test
 * @i: the number that will test n
 * Return: the result of the test
 */
int is_prime_number_aux(int n, int i)
{
/* la bonne réponse était :
if (n % i == 0)
	return (0);
if (i * i > n)
	return (1) */
	if ((n % 2 == 0 && n != 2) || n == 1 || n / i == n % 10 || n == 0 ||
	n * -1 == 1)
		return (0);
	else if (n / i == 1 && n / 1 == n && n % 10 == 1)
		return (1);
	else if (n / i == 1 && n / 1 == n && n % 10 == 3)
		return (1);
	else if (n / i == 1 && n / 1 == n && n % 10 == 7)
		return (1);
	else if (n / i == 1 && n / 1 == n && n % 10 == 9)
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
	return (is_prime_number_aux(n, 1)); /* il aurait fallu initialiser i = 2 */
}
