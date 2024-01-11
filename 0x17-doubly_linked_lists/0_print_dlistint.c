#include "lists.h"

/**
 * print_dlistint - func that prints elems of a dlistint_t list
 * @h: head of the dlistint_t list
 * Return: number of nodes of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nods = 0;

	while(h)
	{
		nods++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nods);
}
