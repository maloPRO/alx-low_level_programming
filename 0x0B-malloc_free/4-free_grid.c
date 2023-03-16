#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees two dimensional grid
 * @grid: 2d grid
 * @height: height dimesion
 * Description: frees memory
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
