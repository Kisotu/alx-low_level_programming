#include <stdio.h>

/**
 * main - prints all arguments it receives each in a new line
 * @argc: no of arguments
 * @argv: argiment vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int k = 0;

	if (argc > 0)
	{
		while (k < argc)
		{
			printf("%s\n", argv[k]);
			k++;
		}
	}
	return (0);
}
