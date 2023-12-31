#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - entry point
 * @width: width of the grid
 * @height: height of the grid
 * Return: a grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	grid = malloc(sizeof(*grid) * height);

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(**grid) * width);
			if (grid[i] == 0)
			{
				while (i--)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
				for (j = 0; j < width; j++)
				{
					grid[i][j] = 0;
				}
		}
	}
	free(grid[i]);
	return (grid);
}
