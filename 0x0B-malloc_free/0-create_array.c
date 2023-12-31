#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array and init with specific char
 * @size: size of char array
 * @c: specific char to init
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		arr[k] = c;
	}
	return (arr);
}
