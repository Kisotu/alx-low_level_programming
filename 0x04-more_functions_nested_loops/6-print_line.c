#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times to draw
 *
 * Return: void
 */


void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
