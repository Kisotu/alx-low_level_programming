#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: array to print
 * @n: number of array elements to print
 * Return: 0 if success
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j != n - 1)
		{
			printf("%d, ", a[j]);
		}
		else
			printf("%d", a[j]);
	}
	printf("\n");
}
