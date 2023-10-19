#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: pointer to ecncoded string s
 */
char *rot13(char *s)
{
	int k, m;
	char n[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char p[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (k = 0; *(s + k); k++)
	{
		for (m = 0; m < 52; m++)
		{
			if (n[m] == *(s + k))
			{
				*(s + k) = p[m];
				break;
			}
		}
	}
	return (s);
}
