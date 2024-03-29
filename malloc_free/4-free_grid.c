#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - Function that frees a 2 dimensional grid previously created
 *            by your alloc_grid function
 *@grid: Double Pointer
 *@height: Double pointer height
 *
 *Return: Always 0
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
