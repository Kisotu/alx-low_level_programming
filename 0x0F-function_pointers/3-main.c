#include "3-calc.h"

/**
 * main - program that performs simple arithmetic operations
 * @argc - args count
 * @argv: args vector
 * Return: 0 if success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int int1, int2, result;
	char c;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int1 = atoi(argv[1]);
	int2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && int2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(int1, int2);

	printf("%d\n", result);

	return (0);
}
