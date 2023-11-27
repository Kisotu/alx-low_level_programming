#include "main.h"

/**
 * append_to_file -  A fxn that appends text at end of file
 * @filename: pointer to file
 * @text_content: string to append to file end
 * Return: 1 if success, -1 otherwise
 */
int append_to_file(const char *filename, char *text_content)
{
	int opn, wrt, length;

	length = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, length);

	if (opn == -1 || wrt == -1)
	{
		return (-1);
	}

	close(opn);

	return (1);
}
