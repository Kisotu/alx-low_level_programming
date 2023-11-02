#include "main.h"

/**
 * _calloc - func that allocates mem for an array using malloc
 * @nmemb: no of elements in array
 * @size: size of arrayin bytes
 * Return: pointer to allocated memory
 */
{
	char *k;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);
	for (n = 0; n < (nmemb * size); n++)
		k[n] = 0;
	return (k);
}
