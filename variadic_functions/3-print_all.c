#include "variadic_functions.h"

/**
 * print_char - return the c char
 * @lst: the char to return
 * Return: c
 */
void print_char(va_list lst)
{
	printf("%c", va_arg(lst, int));
}

/**
 * print_int - return the int i
 * @lst: the integer to return
 * Return: the int
 */
void print_int(va_list lst)
{
	printf("%d", va_arg(lst, int));
}

/**
 * print_float - return the float f
 * @lst: the float to return
 * Return: the float
 */
void print_float(va_list lst)
{
	printf("%f", va_arg(lst, double));
}

/**
 * print_string - return the string s
 * @lst: the string to return
 * Return: the string
 */
void print_string(va_list lst)
{
	char *str = va_arg(lst, char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - print anything
 * @format: the format of the argument to print
 */

void print_all(const char * const format, ...)
{
	va_list lst;
	format_type arr[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0;
	int j;
	char *separator = "";

	va_start(lst, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j != 4)
		{
			if (format != NULL && format[i] == *arr[j].fmt)
			{
				printf("%s", separator);
				arr[j].f(lst);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
