#include "lists.h"

/**
 * reverse_listint - fxn that reverses a linked list
 * @head: pointer to head node
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_Node, *prev_Node;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	prev_Node = NULL;
	while (*head != NULL)
	{
		next_Node = (*head)->next;
		(*head)->next = prev_Node;
		prev_Node = *head;
		*head = next_Node;
	}
	*head = prev_Node;
	return (*head);
}
