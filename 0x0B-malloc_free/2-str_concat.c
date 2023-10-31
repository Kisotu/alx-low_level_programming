#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string to add
 * Return: pointer to new space in memory holding the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int j, k, s1_length, s2_length, length;
	char *comb_str;

	s1_length = s2_length = 0;

	if (s1 != NULL)
	{
		j = 0;
		while (s1[j++] != '\0')
		{
			s1_length++;
		}
	}

	if (s2 != NULL)
	{
		j = 0;
		while (s2[j++] != '\0')
		{
			s2_length++;
		}
	}

	length = s1_length + s2_length;

	comb_str = (char *)malloc(sizeof(char) * (length + 1));

	if (comb_str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < s1_length; j++)
	{
		comb_str[j] = s1[j];
	}
	for (k = 0; k < s2_length; j++, k++)
	{
		comb_str[j] = s2[k];
	}
	comb_str[length] = '\0';

	return (comb_str);
}
