#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2D array
 * @grid: 2d grid
 * @height: height dimention
 * Return: Nothing
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
