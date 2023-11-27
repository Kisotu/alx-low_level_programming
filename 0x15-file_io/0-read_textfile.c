#include "main.h"

/**
 * read_textfile - A fxn that reads a file and prints it to posix stdout
 * @filename: pointer to file
 * @letters: no of letters the fxn should display
 * Return: print letters or 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufer;
	ssize_t opn, rd, wrt;

	if (filename == NULL)
		return (0);

	bufer = malloc(sizeof(char) * letters);
	if (bufer == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(o, bufer, letters);
	wrt = write(STDOUT_FILENO, bufer, rd);

	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(bufer);
		return (0);
	}
	free(bufer);
	close(opn);

	return (wrt);
}
