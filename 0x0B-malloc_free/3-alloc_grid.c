#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		array[i][j] = 0;
	return (array);
}
