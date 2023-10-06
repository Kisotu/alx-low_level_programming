#include <stdio.h>
/**
 * main - prints integers 0-9 using putchar function
 * Return: 0 if success
 */
int main(void)
{
	int numberz;

	for (numberz = 0; numberz <= 9; numberz++)
	{
		putchar(numberz + '0');
	}
	putchar('\n');
	return (0);
}
