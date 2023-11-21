#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elms of a list
 * @h: the pointer to head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 0;

	if (h == NULL)
		return (0);

	for (const listint_t *node = h; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		no_of_nodes++;
	}

	return (no_of_nodes);
}
