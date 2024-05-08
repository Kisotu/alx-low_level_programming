#include "search_algos.h"

/**
 * binary_search - searches for int val in array using binary search algorithm
 * @array: pointer to first element of arr to search
 * @size: size of input array to search
 * @value: val to search for
 * Return: index that contains value being searched for
 * -1 if not found or NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int k;
	int lw, md, hg;

	if (array == NULL)
		return (-1);

	lw = 0;
	hg = size - 1;

	while (lw <= hg)
	{
		md = (lw + hg) / 2;

		printf("Searching in array: ");

		for (k = lw; k <= hg; k++)
		{
			printf("%i%s", array[k], k == hg ? "\n" : ", ");
		}

		if (array[md] < value)
			lw = md + 1;
		else if (array[md] > value)
			hg = md - 1;
		else
			return (md);
	}

	return (-1);
}
