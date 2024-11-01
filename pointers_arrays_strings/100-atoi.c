#include "main.h"

/**
 * _atoi - Convert string into integer
 * @s: the string to convert
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int num;
	
	i = 0;
	sign = 1;
	num = 0;
	
	/* increment if s[i] == space */
	while (s[i] == ' ')
	{
		i++;
	}
	/* manage the letters */
	while (s[i] >= 'a' && s[i] <= 'z')
	{
		i++;
	}
	/* manage '-' and '+' signs */
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	/* display intgers */
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return num * sign;
}
