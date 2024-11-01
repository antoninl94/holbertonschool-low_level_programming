#include "main.h"

/**
 * _atoi - Convert string into integer
 * @s: the string to convert
 * Return: result of converting
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int num;
	int let;
	
	i = 0;
	sign = 1;
	num = 0;
	let = 0;
	
	while (s[i] != '\0')
	{
	/* increment if s[i] == space or == letters */
		if (s[i] == ' ')
		{
			i++;
		}
	/* manage '-' and '+' signs */
		else if (s[i] == '+' || s[i] == '-')
		{
			if (s[i] == '-')
			{
				sign = sign * -1;
			}
			i++;
		}
	/* display intgers if integer turn let = 1 (true) */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			let = 1;
			i++;
		}
		else
		{
			if (let == 1)
			{
				break;
			}
			else
			{
				i++;
			}
		}
	}
	return num * sign;
}
