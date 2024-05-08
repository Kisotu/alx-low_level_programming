#include "search_algos.h"

/**
 * linear_search - searches for value in sorted int array
 * @array: array of ints
 * @size: size of array
 * @value: what to search for
 * Return: index of value, 0 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
