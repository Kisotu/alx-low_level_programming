#include "main.h"

/**
 * more_numbers - prints 0-14 tenX
 * Return: no return val
 */
void more_numbers(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			{
				_putchar(k / 10 + '0');
			}
			else
				_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
