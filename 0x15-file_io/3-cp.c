#include <stdio.h>
#include "main.h"

/**
 * file_check - fxn to check if files can be opened
 * @f_from: file to copy from
 * @f_to: file to copy to
 * @argv: args vector
 * Return: void
 */
void file_check(int f_from, int f_to, char *argv[])
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file%s\n", argv[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s", argv[2]);
		exit(98);
	}
}

/**
 * main - copies content from a file to another
 * @argc: the no of args
 * @argv: args vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int copy_from, copy_to, error_close;
	char buffer[1024];
	ssize_t rd, wrt;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	copy_from = open(argv[1], O_RDONLY);
	copy_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_check(copy_from, copy_to, argv);

	rd = 1024;
	while (rd == 1024)
	{
		rd = read(copy_from, buffer, 1024);
		if (rd == -1)
		{
			file_check(-1, 0, argv);
		}
		wrt = write(copy_to, buffer, rd);
		if (wrt == -1)
		{
			file_check(0, -1, argv);
		}
	}
	error_close = close(copy_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd%d\n", copy_from);
		exit(100);
	}
	error_close = close(copy_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", copy_from);
		exit(100);
	}
	return (0);
}
