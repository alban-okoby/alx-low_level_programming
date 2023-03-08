#include "main.h"

/**
 * _sqrt_recursion - entry point
 * Runction that returns the natural square
 * root, the function should return -1
 * @n: param > number
 * Return: Always 0
 *
 * sqrter - entry point
 * description: same feature
 * @x: param 1
 * @y: param 2
 */

int _sqrt_recursion(int n)
{
	int _sqrt_recursion(int n)
		return (sqrter(n, 1));
}

int sqrter(int x, int y)
{
	if (x  == y * y)
		return (y);
	else if (x < y * y)
		return (-1);
	return (sqrter(x, y + 1));
}
