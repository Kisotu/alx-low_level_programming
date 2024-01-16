#include "main.h"

/**
 * _strpbrk - funx that searches string for a set of bytes
 * @s: pointer to string to search
 * @accept: pointer to string being searched
 * Return: pointer to bytes that match search
 */
char *_strpbrk(char *s, char *accept)
{
	int k, m;

	k = 0;
	while (s[k] != '\0')
	{
		m = 0;
		while (accept[m] != '\0')
		{
			if (s[k] == accept[m])
				return (s + k);
			m++;
		}
		k++;
	}
	return ('\0');
}
