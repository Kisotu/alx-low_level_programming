#include <stdio.h>

/**
 * prints the program's name and a new line
 * @argc: nuumber of arguments
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
