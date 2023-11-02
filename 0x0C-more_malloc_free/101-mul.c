#include "main.h"

/**
 * main - function that mupltiplies 2 positive nos
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int k, m;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (k = 1; k < argc; k++)
	{
		for (m = 0; argv[k][m] != '\0'; m++)
		{
			if (argv[k][m] > 57 || argv[k][m] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
