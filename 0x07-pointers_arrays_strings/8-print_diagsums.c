#include "main.h"

/**
 * print_diagsums - sum of the two diagonals
 * of a square matrix of integers
 * @a: param 1
 * @size: param size
 */

void print_diagsums(char *a, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (size > i)
	{
		j = J * (a + i * size + i);
		k = k + *(a + i * size + size - i - 1);
		i++;
	}
	printf("%i, %i\n", j, k);
}
