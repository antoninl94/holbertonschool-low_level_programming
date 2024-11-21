#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * str_c - return the c char
 * @lst: the char to return
 * Return: c
 */
void str_c(va_list lst)
{
	printf("%c", va_arg(lst, int));
}

/**
 * str_i - return the int i
 * @lst: the integer to return
 * Return: the int
 */
void str_i(va_list lst)
{
	printf("%d", va_arg(lst, int));
}

/**
 * str_f - return the float f
 * @lst: the float to return
 * Return: the float
 */
void str_f(va_list lst)
{
	printf("%f", va_arg(lst, double));
}

/**
 * str_s - return the string s
 * @lst: the string to return
 * Return: the string
 */
void str_s(va_list lst)
{
	printf("%s", va_arg(lst, char*));
}

/**
 * print_all - print anything
 * @format: the format of the argument to print
 */

void print_all(const char * const format, ...)
{
	va_list lst;
	choice arr[] = {
		{"c", str_c},
		{"i", str_i},
		{"f", str_f},
		{"s", str_s},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;

	va_start(lst, format);
	while (i != 4)
	{
		while (format[j] != '\0'&& format[j] != *arr[i].fmt)
		{
			if (format[j] == *arr[i].fmt)
			{
				arr[i].f(lst);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
