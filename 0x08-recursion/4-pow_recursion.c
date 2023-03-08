#include "main.h"

/**
 * _pow_recursion - entry point
 * description: Function that returns the value of x
 * raised to the power of y.
 * @x: param -> number
 * @y: param -> number
 * Return: return -1 then x is lower than y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (n > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
