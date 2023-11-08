#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own fxn
 * @argc: args count
 * @argv: args vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int no_of_bytes, k;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no_of_bytes = atoi(argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (k = 0; k < no_of_bytes; k++)
	{
		if (k == no_of_bytes - 1)
		{
			printf("%02hhx\n", array[k]);
			break;
		}
		printf("%02hhx ", array[k]);
	}
	return (0);
}
