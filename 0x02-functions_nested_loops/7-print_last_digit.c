#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: param
 * Return: n%10
 */
int print_last_digit(int n)
{
	int nbre;

	if (n < 0)
		n = -n;
	nbre = n % 10;
	_putchar (nbre + '0');
	return (nbre);
}
