#include "main.h"
#include <stdlib>

/**
 * _strdup - returns pointer to a new duplicated string
 * @str: source string
 * Return: pointer to the duplicated string, NULL if insufficient mem
 */
char *_strdup(char *str)
{
	char *dupl;
	int k;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
		length++;

	dupl = (char *)malloc((sizeof(char) * length) + 1);
	if (dupl == NULL)
		return (NULL);

	for (k = 0; k < length; k++)
	{
		dupl[k] = str[k];
	}
	dupl[length] = '\0';

	return (dupl);
}
