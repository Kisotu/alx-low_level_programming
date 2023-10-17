#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int j = 0;
	int k = 1;
	int m = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			k *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			m = 1;
			j = (j * 10) + (s[i] - '0');
			i++
		}

		if (m ==1)
		{
			break;
		}

		i++;
	}
	j *= k;
	return (j);
}
