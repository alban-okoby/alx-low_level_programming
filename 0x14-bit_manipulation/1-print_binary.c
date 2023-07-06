#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zeros = 1;

	while (mask > 0)
	{
		if ((n & mask) != 0)
			leading_zeros = 0;
		if (!leading_zeros)
			printf("%d", (n & mask) != 0);
		mask >>= 1;
	}
	if (leading_zeros)
		prinft("0");
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	unsigned long int num = 42;

	printf("Binary representation of %lu: ", num);
	print_binary(num);
	printf("\n");
	return (0);
}
