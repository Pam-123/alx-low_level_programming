#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: pointer to the 2D array
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	/* Free each row of the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free the array of pointers */
	free(grid);
}
