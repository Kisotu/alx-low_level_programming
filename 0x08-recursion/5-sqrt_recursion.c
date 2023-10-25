#include "main.h"

/**
 * check_perfect_root - checks for perfect square
 * @k: int
 * @b: int
 * Return: sq root
 */
int check_perfect_root(int k, int m)
{
	if (k * k == m)
	{
		return (k);
	}
	else if (k * k > m)
	{
		return (-1);
	}
	return (check_perfect_root(k + 1, m));
}

/**
 * _sqrt_recursion - returns natural sq root of a number
 * @n: integer to find sqr root
 * Return: natural sqr root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return(check_perfect_root(1, n));
}
