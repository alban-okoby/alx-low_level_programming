#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - A new struct type.
 * @symbol: symbol.
 * @print: a pointer function pointer
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

#endif
