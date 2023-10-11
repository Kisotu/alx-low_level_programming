#include "main.h"

/**
 * _islower - checks lowercase chars
 * @c - char to check
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
