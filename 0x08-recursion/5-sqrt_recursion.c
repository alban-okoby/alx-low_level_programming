#include "main.h"

/**
 * sqrter - entry point
 * description: same feature
 * @x: param 1
 * @y: param 2
 * Return: always value of the root
 */

int sqrter(int x, int y)
{
	if (x  == y * y)
		return (y);
	else if (x < y * y)
		return (-1);
	return (sqrter(x, y + 1));
}

/**
 * _sqrt_recursion - entry print
 * @n: param -> number
 * Return: the square root -> number
 */

int _sqrt_recursion(int n)
{
	return (sqrter(n, 1));
}
