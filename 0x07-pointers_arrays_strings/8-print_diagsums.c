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
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[(size + 1) * i];
	for (j = 0; j < size; J++)
		sum2 += a[(size - 1) * (j + 1)];
	printf("%d, %d\n", sum1, sum2);
}
