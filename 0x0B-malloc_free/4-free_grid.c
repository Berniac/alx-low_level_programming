#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid
 *
 * @grid: 2-D array of integers
 * @height: Height of the grid
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
