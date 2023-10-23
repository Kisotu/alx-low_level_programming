#include "main.h"

/**
 * _strpbrk - funx that searches string for a set of bytes
 * @s: pointer to string to search
 * @accept: pointer to string being searched
 * Return: pointer to bytes that match search
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return [s];
			}
		}
		s++;
	}
	return ('\0');
}
