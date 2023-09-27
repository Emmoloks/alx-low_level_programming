#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * free_grid - frees a 2D grid
 * @grid: memory to free
 * @height: size of array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[(height - 1) - i]);
	}
	free(grid);
}
