#include "main.h"
#include <stdlib.h>

/**
 * _realloc - func thta reallocates mem block using malloc and free
 * @ptr: pointer to prev mem
 * @old_size: size in bytes of allocated space
 * @new_size: new size, in bytes, of the new block
 * Return: pointer to allocates space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
