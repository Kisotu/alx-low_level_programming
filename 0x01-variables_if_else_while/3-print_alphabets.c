#include <stdio.h>
/**
 * main - A program that prints alphabets in both cases
 * Return: 0 if success
 */
int main(void)
{
	char l_case;
	char u_case;

	for (l_case = 'a'; l_case <= 'z'; l_case++)
	{
		putchar(l_case);
	}
	putchar('\n');
	for (u_case = 'A'; u_case <= 'Z'; u_case++)
	{
		putchar(u_case);
	}
}
