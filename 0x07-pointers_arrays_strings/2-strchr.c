#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to locate char
 * @c: char being looked for
 * Return: pointer to first occurrence of char c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
