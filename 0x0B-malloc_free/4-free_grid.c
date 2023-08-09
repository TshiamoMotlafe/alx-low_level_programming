#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid (number of rows).
 *
 * Description: This function frees the memory allocated for a 2D grid.
 *              It first frees the memory for each row and then for the
 *              array of pointers holding the rows.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	return;

	for (i = 0; i < height; i++)
	{
	if (grid[i] != NULL)
	free(grid[i]);
	}

	free(grid);
}
