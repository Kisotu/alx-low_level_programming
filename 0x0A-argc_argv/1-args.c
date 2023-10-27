#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * 		to the progra
 * 		m
 * @argc: number of arguments passed
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
