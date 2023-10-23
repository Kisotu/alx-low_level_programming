#include "main.h"

/**
 *  _strspn - gets length of a prefix substring
 *  @s: pointer to string to search
 *  @accept: poiner to substring to find
 *  Return: no of bytes of substring
 */
unsigned int _strspn(char *s, char *acccept)
{
	int k, m, n;

	k = 0;
	while (s[k] != '\0')
	{
		m = 0;
		n = 0;
		while (accept[m] != '\0')
		{
			if (s[k] == accept[m])
			{
				n = 0;
				break;
			}
			m++;
		}
		if (n ==1)
			break;
		k++;
	}
	return (k);
}
