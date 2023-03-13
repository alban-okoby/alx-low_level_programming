#include "main.h"
#include <stdlib.h>

/**
 * free_grid - two dimentional grid
 * @grid: param -> array multidimentional
 * @height: param -> grid height
 */

void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
