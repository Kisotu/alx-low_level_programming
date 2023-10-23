#include "main.h"

/**
 *  _strspn - gets length of a prefix substring
 *  @s: pointer to string to search
 *  @accept: poiner to substring to find
 *  Return: no of bytes of substring
 */
unsigned int _strspn(char *s, char *acccept)
{
	int k = 0;
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] != 32)
		{
			for (n = 0; accept[n] != '\0'; n++)
			{
				if (s[m] == accept[n])
				{
					k++;
				}
			}
		}
		else
			return (k);
	}
		return (k);
}
