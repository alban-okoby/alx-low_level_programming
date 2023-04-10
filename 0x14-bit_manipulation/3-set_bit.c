#include "main.h"

/**
 * set_bit - Sets the value of a bit
 * @n: Pointer to an unsigned long int
 * @index: Index of the bit to be set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* index is out of range */
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
