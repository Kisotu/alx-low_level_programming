#include "function_pointers.h"

/**
 * int_index - fxn that searches for an integer
 * @array: the array to search
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first elem
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int k;

	if (array && cmp)
	{
		for (k = 0; k < size; k++)
		{
			if (cmp(array[k]) != 0)
				return (k);
		}
	}

	return (k);
}
