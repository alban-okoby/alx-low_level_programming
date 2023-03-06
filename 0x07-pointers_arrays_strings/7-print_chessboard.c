#include "main.h"

/**
 * print_chessboard - sum of the two diagonals
 * of a square matrix of integers
 * @a: param 1
 */

void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k + 0; k <= 7; k++)
	{
		for (l = 0; l <= 7; l++)
			_putchar(a[k][l]);
	}
	_putchar('\n');
}
