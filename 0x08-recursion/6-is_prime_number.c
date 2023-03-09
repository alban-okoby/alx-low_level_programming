#include "main.h"

/**
 * prime - entry point
 * description: this function that ..
 * @x: same integer -> n
 * @y: integer -> n
 * Return: always ✔
 */

int prime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime(x, y + 1));
}

/**
 * is_prime_number - entry point
 * @n: param -> number
 * Return: always success
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
