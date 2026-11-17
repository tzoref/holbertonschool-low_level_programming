#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Columns of the array.
 * @height: Rows of the array.
 * Description: Allocates a two-dimensional array of integers,
 * with every element initialized to 0.
 * Return: Pointer to the grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{	
	int **grid;
	int h;
	int w;

	h = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
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
	}	
}
