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
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		if (i % (size - 1) == 0 && i < (size * size - 1) && i != 0)
			sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
