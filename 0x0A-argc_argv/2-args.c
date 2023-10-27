#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives each in a new line
 * @argc: no of arguments
 * @argv: argiment vector
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	for (int k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
