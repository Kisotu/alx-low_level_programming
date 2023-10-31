#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: horizontal size of array
 * @height: vertical size of array
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr_2D, j, k;
	int length = width * height;

	if (length <= 0)
		return (NULL);

	arr_2D = (int **)malloc(sizeof(int *) * height);
	if (arr_2D == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		arr_2D[j] = (int *)malloc(sizeof(int) * width);
		if (arr_2D[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(arr_2D[j]);
			free(arr_2D);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
		for (jk = 0; k < width; k++)
			arr_2D[j][k] = 0;

	return (arr_2D);
