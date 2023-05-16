#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Nested loop made to grid
 * @width: The width of input
 * @height: Height of the input
 * Return: This points to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int p, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		mee[p] = malloc(sizeof(int) * width);

		if (mee[p] == NULL)
		{
			for (; p >= 0; p--)
				free(mee[p]);
			free(mee);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
	{
		for (y = 0; y < width; y++)
			mee[p][y] = 0;
	}
	return (mee);
}
