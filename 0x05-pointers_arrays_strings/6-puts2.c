#include "main.h"

/**
 * puts2 - prints every other 2nd character of a string
 * @str: string input
 * Return: 0 if success
 */
void puts2(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
