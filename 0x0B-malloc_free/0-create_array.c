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
	char *arr = malloc(size * sizeof(char));
	for (int k = 0; k < size; k++)
	{
		arr[k] = c;
	}
	return arr;
}
