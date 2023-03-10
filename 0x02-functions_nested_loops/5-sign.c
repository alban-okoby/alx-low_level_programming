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
		_putchar(43 + 0);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45 + 0);
		return (-1);
	}
	else
	{
		_putchar(0 + 48);
		return (0);
	}
}
