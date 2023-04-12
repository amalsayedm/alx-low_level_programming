#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create 2-dimensional array of 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **arr2D;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr2D = malloc(sizeof(int *) * height);

	if (arr2D == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		arr2D[hgt_index] = malloc(sizeof(int) * width);

		if (arr2D[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(arr2D[hgt_index]);

			free(arr2D);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			arr2D[hgt_index][wid_index] = 0;
	}

	return (arr2D);
}
