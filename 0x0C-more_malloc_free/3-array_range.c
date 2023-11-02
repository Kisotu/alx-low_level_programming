#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: lowest value in range
 * @max: highest value in range
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int k, size_arr;
	int *pnter;

	if (min  > max)
		return (NULL);

	size_arr = max -min + 1;

	pnter = malloc(sizeof(int) * size_arr);

	if (pnter ==NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		pnter[k] = min++;
	return (pnter);
}
