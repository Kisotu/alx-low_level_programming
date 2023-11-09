#include "variadic_functions.h"

/**
 * print_numbers - fxn that prints numbers
 * @separator: string to be printed btwn numbers
 * @n: no of integers passed to fxn
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v_list;
	unsigned int k;

	va_start(v_list, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(v_list, int));
		if (separator && k < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(v_list);
}
