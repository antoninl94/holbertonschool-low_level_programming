#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: what will separates different args
 * @n: number of args to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;

	va_start(num, n);
	if (separator == NULL)
	{
		while (i < n)
		{
			printf("%d", va_arg(num, int));
			i++;
		}
		printf("\n");
	}
	else
	{
		while (i < n)
		{
			printf("%d", va_arg(num, int));
			i++;
			if (i == n)
				printf("\n");
			else
				printf("%s", separator);
		}
		va_end(num);
	}
}
