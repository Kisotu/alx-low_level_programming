#include "lists.h"

/**
 * delete_nodeint_at_index - fxn that deletes node at nth index
 * @head: pointer to had node
 * @index: index of node to delete
 * Return: 1 if success, 0 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_Node, *temp_Node;
	unsigned int indx;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next_Node = (*head)->next;
		free(*head);
		*head = next_Node;
		return (1);
	}
	temp_Node = *head;

	for (indx = 0; indx < index - 1; indx++)
	{
		if (temp_Node->next == NULL)
			return (-1);
		temp_Node = temp_Node->next;
	}
	next_Node = temp_Node->next;
	temp_Node->next = next_Node->next;
	free(next_Node);
	return (1);
}
