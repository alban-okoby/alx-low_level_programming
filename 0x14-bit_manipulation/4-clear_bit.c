#include "main.h"

/**
 * clear_bit - Entry point
 * @n: Pointer to an unsigned long int
 * @index: The index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* The index is out of range */
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
