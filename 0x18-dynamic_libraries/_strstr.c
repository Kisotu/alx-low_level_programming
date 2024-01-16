#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: input string to search
 * @needle: subtring to search for
 *
 * Return: pointer to the beginning
 *         of the located substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	/*
	 * helping variables
	 */
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
