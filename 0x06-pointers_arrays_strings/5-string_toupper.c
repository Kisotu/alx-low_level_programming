#include "main.h"

/**
 * string_toupper - makes all lowercase to uppercase
 * @s: string to transform
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int k;

	k = 0;
	while (*(s + k))
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
		{
			*(s + k) -= 'a' - 'A';
		}
		else
			k++;
	}
	return (s);
}


