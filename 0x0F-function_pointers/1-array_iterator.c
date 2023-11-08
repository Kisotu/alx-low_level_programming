#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execs fxn given as param on each array elem
 * @array: the array containing elems
 * @size: the size of the array
 * @action: pointer to the fxn to use
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int k;

	if (!array || !action)
		return;

	for (k = 0; k < size; k++)
		action(array[k]);
}
