#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int value
 * @index: unsigned int index of the bit
 *
 * Return: value of the bit at index index, or -1 if an error occurred
 *
 * Author - ALban Okoby
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
