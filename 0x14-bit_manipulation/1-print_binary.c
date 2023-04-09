#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_binary - Entry ppoint
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_mask = 1;
	int bit_number = 0;

	/* Find the number of bits in n */
	while ((n >> bit_number) > 0)
		bit_number++;

	/* Print each bit starting from the most significant bit */
	while (bit_number--)
	{
		if (bit_mask & n)
			_putchar('1');
		else
			_putchar('0');

		bit_mask <<= 1; /* Shift mask to the next bit */
	}

	/* If n is 0, still print a 0 */
	if (bit_number < 0)
		_putchar('0');
}
