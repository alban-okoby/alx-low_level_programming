#include "main.h"
#include <stdlib.h>

/**
 * free_grid - two dimentional grid
 * @grid: param -> array multidimentional
 * @height: param -> grid height
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 1; height--)
			free(grid[height]);
		free(grid);
	}
}
