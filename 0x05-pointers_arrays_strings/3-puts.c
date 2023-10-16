#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: string to print
 * Return: length of string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
