#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional array of integers.
 * @width: The width of the grid (number of columns).
 * @height: The height of the grid (number of rows).
 *
 * Return: If memory allocation fails or width/height is 0 or negative,returns.
 *         Otherwise, returns a pointer to the allocated 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;

	int j;

	int i;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)
	free(grid[j]);
	free(grid);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}

	return (grid);
}
