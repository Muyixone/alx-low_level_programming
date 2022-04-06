#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created prior
 * by the alloc_grid function.
 * @grid: matrix double pointer
 * @height: rows (pointer)
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{	
		free(*(grid + i));
		i++;
	}
	free(grid);
}
