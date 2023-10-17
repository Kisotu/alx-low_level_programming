#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string to half
 * Return: 0 if success
 */
void puts_half(char *str)
{
	int k = 0, j;

	while (str[k] != '\0')
	{
		k++;
	}
	if (k + 1 % 2 != '0')
	{
		j = (k - 1) / 2;
	}
	else
	{
		j = (k / 2);
	}
	j++;

	for (k = j; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
