#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to check
 * Return: 0 if success
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; *s++;)
	{
		a++;
	}
	return (a);
}
