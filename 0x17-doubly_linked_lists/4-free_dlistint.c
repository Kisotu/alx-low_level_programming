#include "lists.h"

/**
 * free_dlistint - func that frees a double linked list
 * @head: pointer to first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


