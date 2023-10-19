#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string to encode
 * Return: pointer to encoded string s
 */
char *leet(char *s)
{
	int k, m;
	char n[] = "aAeEoOtT1L";
	char p[] = "4433007711";

	for (k = 0; *(s + k); k++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (n[m] == s[k])
			{
				s[k] = p[m];
			}
		}
	}
	return (s);
}
