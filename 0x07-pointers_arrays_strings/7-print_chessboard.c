#include "main.h"

/**
 * print_chessboard - sum of the two diagonals
 * of a square matrix of integers
 * @a: param 1
 */

void print_chessboard(char (*a)[8])
{
	int k, l, m;

	k = l = m = 0;
	while (**(a + m) != '\0')
		m++;
	while (**(a + k) != '\0')
	{
		for (l = 0; k <= 7; k++)
			_putchar(a[k][l]);
		_putchar(10);
		k++;
	}
}
