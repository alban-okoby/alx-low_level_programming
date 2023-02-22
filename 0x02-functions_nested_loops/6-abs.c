#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: param
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	if (n > 0)
		return (n);
	return (0);
}
