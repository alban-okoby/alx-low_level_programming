#include "main.h"

/**
 * print_chessboard - sum of the two diagonals
 * of a square matrix of integers
 * @a: param 1
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (**(a + k) != '\0')
		k++;
	while (**(a + i) != '\0')
	{
		for (j = 0; j <= 7; j++)
			_putchar(a[i][j]);
		_putchar(10);
		k++;
	}
}
