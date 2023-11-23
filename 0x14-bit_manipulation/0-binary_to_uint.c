#include "main.h"

/**
 * binary_to_uint - fxn that converts numbrt to unsigned int
 * @b: pointer to 0 and 1 chars
 * Return: converted numbrtor 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k;
	int m;

	k = 0;
	if (!b)
		return (0);
	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
	}
	for (m = 0; b[m] != '\0'; m++)
	{
		k <<= 1;
		if (b[m] == '1')
			k += 1;
	}
	return (k);
}
