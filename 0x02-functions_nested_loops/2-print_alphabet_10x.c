#include "main.h"

/**
 * print_alphabet_10x - prints alphabets lowercase 10x
 * Return: void
 */
void print_alphabet_10x(voi)
{
	char c;
	int times;

	for (times = 0; times <= 10; times++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
