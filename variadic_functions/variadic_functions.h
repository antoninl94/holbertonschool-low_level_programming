#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type_form - format of the string to print
 * @fmt: the format to print selected by user
 * @f: the function that will be used to print argument
 */
typedef struct type_form
{
	char *fmt;
	void (*f)(va_list lst);
} format_type;
void print_char(va_list lst);
void print_int(va_list lst);
void print_float(va_list lst);
void print_string(va_list lst);
#endif
