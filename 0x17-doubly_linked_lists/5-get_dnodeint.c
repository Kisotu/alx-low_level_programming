#include "lists.h"

/**
 * get_dnodeint_at_index - func that finds a node at index
 * @head: first node of list
 * @index: node to locate
 * Return: address of node to find, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
