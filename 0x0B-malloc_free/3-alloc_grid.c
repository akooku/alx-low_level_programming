#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: each element on grid if success
 * NULL on failure, NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int *grid[width][height];
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid[width][height] = (int *) malloc(sizeof(int) * (width * height));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
