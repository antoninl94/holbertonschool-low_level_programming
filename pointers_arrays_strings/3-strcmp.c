#include "main.h"

/**
 * _strcmp - compare each character of a string
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: the diference between first and second string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
