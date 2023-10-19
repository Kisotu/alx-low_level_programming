#include "main.h"

/**
 * string_toupper - makes all lowercase to uppercase
 * @s: string to transform
 * Return: uppercase string
 */
char *string_toupper(char *S)
{
	int k;

	k = 0;
	while (*(s + k))
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
		{
			*(s + k) -= 'a' - 'A';
			k++;
		}
	}
	return (s);
}


