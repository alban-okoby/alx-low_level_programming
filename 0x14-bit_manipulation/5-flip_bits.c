#include "main.h"

/**
 * flip_bits - The function that
 * returns the number of bits you would nee to flip to get
 * from one number to another
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int the_counter 0;
	unsigned long int the_mask = n ^ m;

	while (the_mask)
	{
		the_counter = the_mask & 1;
		the_mask >>= 1;
	}

	return (the_counter);
}
