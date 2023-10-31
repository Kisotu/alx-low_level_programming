#include <stdlib.h>
#include "main.h"

/**
 * free_grid - func that frees a 2D grid created by the prev func
 * @grid: pointer to 2D grid to free
 * @height: vertical size of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
