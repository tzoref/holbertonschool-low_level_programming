#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory of a two-dimensional grid.
 * @grid: The grid to be freed.
 * @height: Number of rows in the grid.
 *
 * Description: Frees memory allocated for each row,
 * followed by the memory allocated for the row pointers.
 */
void free_grid(int **grid, int height)
{
	int h;

	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
