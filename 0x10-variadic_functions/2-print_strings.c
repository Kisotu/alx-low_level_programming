#include "variadic_functions.h"

/**
 * print_strings - fxn that prints strings and a new line
 * @separator: string to print btwn the strings
 * @n: no of strings to pass to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *str;
	va_list v_list;

	va_start(v_list, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(v_list, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (k < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(v_list);
}
