#include <stdio.h>
/**
 * main - A program that prints 0-10
 * Return: 0 if success
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		printf("%i", numbers);
	}
	printf("\n");
	return (0);
}
