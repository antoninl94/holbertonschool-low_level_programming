#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * 
 */
typedef struct choices
{
	char *fmt;
	void (*f)(va_list);
} choice;
void str_c(va_list lst);
void str_i(va_list lst);
void str_f(va_list lst);
void str_s(va_list lst);
#endif
