#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	char tmp;
	int start;
	int end;

	end = 0;
	start = 0;

	while (s[end] != '\0')
		end++;
	end--;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
