#include <stdio.h>
/**
 * main - A program that prints all possible combos of single digit nos
 * Return: 0 if success
 */
int main(void)
{
	int numbz;
	/*print 0-9*/
	for (numbz = 0; numbz <= 9; numbz++)
	{
		putchar(numbz + '0');
		if (numbz != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
