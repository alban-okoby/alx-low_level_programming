#include "main.h"

/**
 * swap_int -entry point
 * @a: first number
 * @b: second number
 * Return: Always return 0
 *
 */

void swap_int(int *a, int *b)
{
	int k, l;

	k = *a;
	l = *b;

	*a = l;
	*b = k;
}
