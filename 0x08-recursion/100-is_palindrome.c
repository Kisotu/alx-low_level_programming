#include "main.h"

/**
 * str_len - prints length of string
 * @s: string to print
 * Return: length of string
 */
int str_len(char *s)
{
	if (s[0] != '\0')
		return (1 + str_len(s + 1));
	return (0);
}

/**
 * pali_check - check if string is palindrome
 * @s: string address
 * @j: left index
 * @k: right index
 * Return: 1 if palindrome
 */

int pali_check(char *s, int j, int k)
{
	if (s[j] == s[k])
		if (j > k / 2)
			return (1);
		else
			return (pali_check(s, j + 1, k - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks palindrome
 * @s: string to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (pali_check(s, 0, str_len(s) - 1));
}
