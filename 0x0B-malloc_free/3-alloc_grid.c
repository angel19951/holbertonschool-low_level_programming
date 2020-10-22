#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 * Return: NULL if width or height <= 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	grid = malloc(sizeof(int *) * (height));
	if (grid == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * (width));
		if (grid[i] == '\0')
		{
			i--;
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return ('\0');
		}
	}
	return (grid);
}
