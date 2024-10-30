#include "main.h"

/**
 * puts2 - print the even numbers
 *@str: the string
 */
void puts2(char *str)
{
	int start;

	start = 0;

	while (str[start] != '\0')
	{
		if (start % 2 == 0)
		{
			_putchar(str[start]);
		}
		start++;
	}
	_putchar('\n');
}
