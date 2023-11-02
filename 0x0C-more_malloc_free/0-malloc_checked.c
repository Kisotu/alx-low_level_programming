#include "main.h"

/**
 * malloc_checked - func that allocates mem using malloc
 * @b: memory size to allocate
 * Return: pointer to the alloc memory
 */
void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (k);
}
