#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - freeing a 2d grid creted
 * @grid: 2 dimensional grid
 * @height: height of the 2d  grid
 * Return: nothing
 *
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
