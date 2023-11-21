#include "lists.h"

/**
 * pop_listint - fxn that deletes head of a list
 * @head: pointer to head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *temp_node, *next_node;

	if (*head == NULL)
		return (0);
	temp_node = *head;
	next_node = temp_node->next_node;

	head_node = temp_node->n;
	free(temp_node);

	*head = next_node;

	return (head_node);
}
