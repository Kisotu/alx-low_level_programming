#include "lists.h"

/**
 * get_nodeint_at_index - fxn that gets the node at nth index
 * @head: pointer to head
 * @index: index of list to access
 * Return: the nth node item in list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index && head != NULL; k++)
	{
		head = head->next;
	}

	return (head);
}
