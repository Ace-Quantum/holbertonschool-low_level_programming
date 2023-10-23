#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a grid previously made earlier
 * @grid: the grid in question
 * @height: the height of the grid in question
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i <= height; i++)
		free(grid[i]);

	free(grid);
}
