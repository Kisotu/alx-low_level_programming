#include "main"

/**
 * _strcat - concatenates 2 strings
 * @dest: string to be appended to
 * @src - string to append
 * Return: pointer to appended string
 */
char *_strcat(char *dest, char *src)
{
	char *k = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (k);
}
