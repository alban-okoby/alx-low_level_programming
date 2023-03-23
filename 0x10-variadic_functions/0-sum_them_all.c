#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all its parameter.
 * @n: The number of paramter.
 * @...: variable number who calculate sum
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
