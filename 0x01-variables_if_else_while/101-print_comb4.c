#include <stdio.h>
/**
 * main - A program that prints comb of 3 digits uniquely
 * Return: 0 if success
 */
int main(void)
{
	int num1, num2, num3;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a != b && b != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putcahr(c + '0');
					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
