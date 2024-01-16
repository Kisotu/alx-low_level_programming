#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: points to memory area to fill
 * @n: number of bytes to fill
 * @b: byte value to fill memory with
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
