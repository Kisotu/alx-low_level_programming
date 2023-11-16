#include "lists.h"

/**
 * list_len - a function that returns
 * the no of elems in list
 * @h: name of linked list
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
