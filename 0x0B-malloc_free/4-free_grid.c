#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the 2d arrays
 * @grid: The 2d grid
 * @height: Displays the height dimension of grid
 * Description: This will free the memory of grid
 * Return: None
 *
 */

void free_grid(int **grid, int height)

{

	int m;
		for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
