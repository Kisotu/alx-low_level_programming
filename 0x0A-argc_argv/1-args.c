#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments passed
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
