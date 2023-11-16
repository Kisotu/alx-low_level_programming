#include "lists.h"

/**
 * print_list - A function that prints all elems of a list
 * @h: name of the linked list
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_count += 1;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (node_count);
}
