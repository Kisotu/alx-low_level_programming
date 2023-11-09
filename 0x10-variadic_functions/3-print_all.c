#include "variadic_functions.h"

/**
 * print_all - fuction that prints anything
 * @format: list of args passed to fxn
 */
void print_all(const char * const format, ...)
{
	va_list v_list;
	char *str;
	int k;
	int printComma;

	va_start(v_list, format);
	k = 0;
	while (format != NULL && format[k] != '\0')
	{
		switch (format[k])
		{
			case 'c':
				printf("%c", va_arg(v_list, int));
				printComma = 0;
				break;
			case 'i':
				printf("%i", va_arg(v_list, int));
				break;
			case 's':
				str = va_arg(v_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				printComma = 0;
				break;
			case 'f':
				printf("%f", va_arg(v_list, double));
				printComma = 0;
				break;
			default:
				printComma = 1;
				break;
		}
		if (format[k + 1] != '\0' && printComma == 0)
			printf(", ");
		k++;
	}
	printf("\n");
	va_end(v_list);
}
