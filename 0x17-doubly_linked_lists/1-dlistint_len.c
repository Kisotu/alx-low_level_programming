#include "lists.h"

/**
 * dlistint_len - func that counts no of elems in a linked list
 * @h: head of the list
 * Return: no of elems in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nods = 0;

	while (h)
	{
		nods++;
		h = h->next;
	}

	returns (nods);
}
