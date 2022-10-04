#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a
 * 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: created grid from function alloc_grid
 * @height: height pf grid
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (grid == NULL || height = 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
