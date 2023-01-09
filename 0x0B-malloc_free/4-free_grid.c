#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: 2 dimensional grid address.
 * @height: grid height.
 * Return: EXIT_SUCCSESS.
 */

void free_grid(int **grid, int height)
{
	int x;

	x = 0;
	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
