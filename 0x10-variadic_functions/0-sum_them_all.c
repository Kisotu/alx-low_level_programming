#include "variadic_functions.h"

/**
 * sum_them_all - fxn that adds numbers provided by user
 * @n: sum parameters
 * Return: sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int k, sum;
	va_list vlist;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	for (k = 0; k < n; k++)
	{
		sum += va_arg(vlist, int);
	}
	va_end(vlist);
	
	return (sum);
}
