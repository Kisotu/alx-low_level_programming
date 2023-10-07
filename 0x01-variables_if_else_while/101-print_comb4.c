#include <stdio.h>
/**
 * main - A program that prints comb of 3 digits uniquely
 * Return: 0 if success
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				if (num1 != num2 && num2 != num3)
				{
					if (a < b && b < c)
					{
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(num3 + '0');
					
						if (num1 + num2 + num3 != 24)
						{

							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
