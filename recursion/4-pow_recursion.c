#include "main.h"

/**
 * _pow_recursion - will return result of x power y
 * @x: integer to multiply by itself
 * @y: how many time multiply x
 * Return: result of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
