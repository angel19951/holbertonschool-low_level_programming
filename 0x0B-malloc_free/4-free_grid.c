#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: no return for void functions
 */

void free_grid(int **grid, int height)
{
	int i;
	if (grid == NULL)
	{
		return;
	}
	if (height < 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	return;
}
