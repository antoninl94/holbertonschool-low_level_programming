#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add a and b
 * @a: first number
 * @b: second number
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub a and b
 * @a: first number
 * @b: second number
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -multiply a and b
 * @a: first number
 * @b: second number
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: first number
 * @b: second number
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo de a and b
 * @a: first number
 * @b: second number
 * Return: return the remainder of the division
 * of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
