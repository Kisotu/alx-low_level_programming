#include <stdio.h>

/**
 * main - A program that prints alphabets but omits q and e
 * Return: 0 if success
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
