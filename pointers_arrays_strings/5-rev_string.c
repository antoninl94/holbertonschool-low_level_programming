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


	while (s[end] != '\0') /* on s'arrête quand on arrive à la fin de la chaine */
		end++;
	end --;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
