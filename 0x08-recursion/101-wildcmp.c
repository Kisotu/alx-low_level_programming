#include "main.h"

/**
 * string_checker - check if 2 strings are similar
 * @st1: string1 address
 * @st2: string2 address
 * @j: left index
 * @k: special index
 * Return: 1 if palindrome
 */
int string_checker(char *st1, char *st2, int j, int k)
{
	if (st1[j] == '\0' && st2[k] == '\0')
	{
		return (1);
	}
	else if (st1[j] == st2[k])
	{
		return (string_checker(st1, st2, j + 1, k + 1));
	}
	else if (st1[j] == '\0' && st2[k] == '*')
	{
		return (string_checker(st1, st2, j, k + 1));
	}
	else if (st2[k] == '*')
	{
		return (string_checker(st1, st2, j + 1, k) || string_checker(st1, st2, j, k + 1));
	}
	return (0);
}

/**
 * wildcmp - checks if string is identical to another
 * @s1: first string
 * @s2: secomd string to compare
 * Return: 1 if identical
 */
int wildcmp(char *s1, char *s2)
{
	return (string_checker(s1, s2, 0, 0)):
}
