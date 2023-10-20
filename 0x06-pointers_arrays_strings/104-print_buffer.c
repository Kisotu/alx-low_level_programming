#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;
	
	for (i = 0; i < size; i += 10)
	{
		printf("0x%08x: ", i);
		for (j = 0; j < 2; j++)
		{
			if (isprint(b[i + j]))
			{
				printf("%c", b[i + j]);
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	}
	if (size == 0 || i != size)
	{
		printf("\n");
	}
}
