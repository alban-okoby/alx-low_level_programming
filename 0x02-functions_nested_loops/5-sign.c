#include "main.h"

/**
 * print_sign: print the sign of number
 * Description: print the sign of a number
 * @c: integer
 * Return: 0 or 1 or -1
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}
