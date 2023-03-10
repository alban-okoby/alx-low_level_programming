#include "main.h"

/**
 * largest_number - the largest of three numbers
 * Description: Largest number
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int l;

	if (a >= c && a >= b)
		l = a;
	else if (b >= a && b >= c)
		l = b;
	else
		l = c;

	return (l);
}
