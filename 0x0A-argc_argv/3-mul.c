#include <stdio.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: argument vector
 * return: 0 if success
 */
int main(int argc, char *argv[])
{
	in k, m;

	if (argc == 3)
	{
		k = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", k * m);
		return (0);
	}
	printf("Error\n");
	return (1);
}
