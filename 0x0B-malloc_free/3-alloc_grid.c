#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - a function that returns a pointer to  array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2-dimensional array of integers else NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	grid = (int **)malloc(height * sizeof(int *));

	if (grid == 0)
	{
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
