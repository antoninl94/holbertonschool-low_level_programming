#include "main.h"

/**
 * _slower - return error code
 * @c: the character
 * Return: 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
