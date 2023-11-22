#include "lists.h"

/**
 * pop_listint - fxn that deletes head of a list
 * @head: pointer to head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node, *next;
	int fst_node;

	if (*head == NULL)
		return (0);

	temp_node = *head;
	next = temp_node->next;

	fst_node = temp_node->n;
	free(temp_node);

	*head = next;

	return (fst_node);
}
