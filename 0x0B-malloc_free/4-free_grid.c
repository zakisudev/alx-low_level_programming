#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees the memory allocated to a 2D array
 * @grid: 2D array from which the memory will be freed
 * @height: the height (number of rows) of the 2D array
 *
 * Return: nothing - void
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
