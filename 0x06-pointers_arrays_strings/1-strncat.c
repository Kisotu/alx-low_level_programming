#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source of strings
 * @dest: destination of the string
 * @n: length to check
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, m;

	for (k = 0; dest[k] != '\0'; k++)
	{
		continue;
	}

	for (m = 0; src[m] != '\0' && m < n; m++)
	{
		dest[k + m] = src[m];
	}
	dest[k + m] = '\0';
	return (dest);
}
