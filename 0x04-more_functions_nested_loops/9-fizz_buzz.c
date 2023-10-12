#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: plays the FizzBuzz game
 * Return: 0 if success
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (k % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (k % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", k);
		}
	}
	return (0);
}
