#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elms of a list
 * @h: the pointer to head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_of_nodes++;
	}

	printf("%d\n", h->n);
	return (no_of_nodes);
}
