#include "lists.h"

/**
 * listint_len - a function that retuerns no of elems in a lsit
 * @h: pointer to head
 * Return: length of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t no_of_elements = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			no_of_elements++;

		h = h->next;
	}

	return (no_of_elements);
}
