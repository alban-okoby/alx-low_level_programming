#include "main.h"

/**
 * factorial - entry point
 * description: Function that returns the factorial
 * of a given number
 * @n: param -> number
 * Return: return -1 i n is lower than 0
 */

int factorial (int n)
{
	if (n < 0)
		return (-1);
	if( n > 0)
		return n * factorial(n - 1);
	return (1);
}
