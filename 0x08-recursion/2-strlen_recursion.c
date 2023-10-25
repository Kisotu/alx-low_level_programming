#include "main.h"

/**
 * _strlen_recursion - finds length of a string
 * @s: string to find length
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s)
	{
		k++;
		k += _strlen_recursion(s + 1);
	}
	return (k);
}
