#include "main.h"

/**
 * _isalpha - checks fro aplhabet chars
 * @c: alphabet char to check
 * Return: 1 if letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) ||  (c >=97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
