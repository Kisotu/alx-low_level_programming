#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all args of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new concatenated string, or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int j, k, m, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		s = av[j];
		k = 0;

		while (s[k++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (j = 0, k = 0; j < ac && k < len; j++)
	{
		s = av[j];
		m = 0;

		while (s[m])
		{
			str[k] = s[m];
			m++;
			k++;
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
