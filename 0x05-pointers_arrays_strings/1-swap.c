#include "main.h"

/**
 * swap_int  - swaps the value of a and b
 * @a: first integer value
 * @b: second integer value
 * Return: o if success
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
