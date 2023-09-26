#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: of the 2D array
 * @height: of 2D array
 * Return: a pointer to the allocated 2D array
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == 0)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid == 0)
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

