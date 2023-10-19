#include "main.h"

/**
 * reverse_array - reverses int array content
 * @a: array of integers
 * @n: number of elements
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int k, m;

	for (k = 0; (k < (n - 1) / 2); k++)
	{
		m = a[k];
		a[k] = a[n - 1 - k];
		a[n - 1] = m;
	}
}
