#include "main.h"

/**
 * _isalpha - Function that return a result
 * in result of the character
 * @c: the character that's gonna be scanned
 * Return: 1 if it's a letter otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
