#include "3-calc.h"

/**
 * op_add - som of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: always 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function subctracts 2 numbers.
 * @a: first number.
 * @b: second number.
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function multiplies 2 numbers
 * @a: first number.
 * @b: second number.
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function divides 2 numbers.
 * @a: first number.
 * @b: second number.
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the two number module.
 * @a: first number.
 * @b: second number.
 * Return: modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
