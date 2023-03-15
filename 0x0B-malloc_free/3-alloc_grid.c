#include "main.h"
#include <stdlib.h>
#include <stddef.h>

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
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * width);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * height);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
