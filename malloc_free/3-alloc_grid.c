
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a two-dimensional array of integers.
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Description: Allocates a grid and initializes every element to 0.
 *
 * Return: Pointer to the grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	h = 0;
	while (h < height)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			w = 0;
			while (w < h)
			{
				free(grid[w]);
				w++;
			}
			free(grid);
			return (NULL);
		}

		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
