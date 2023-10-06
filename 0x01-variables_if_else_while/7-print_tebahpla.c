#include <stdio.h>
/**
 * main - A program that prints a reversed alphabet
 * Return: 0 if success
 */
int main(void)
{
	char alph;
	/*loop from a reverse order*/

	for (alph = 'z'; alph >= 'a'; --alph)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
