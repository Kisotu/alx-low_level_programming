#include <stdio.h>
/**
 * main - A program to print alphabets in lower case
 * Return: 0 if success
 */
int main(void)
{
	char alph;

	for(alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
		putchar(' ');
	}
	return (0);
}
