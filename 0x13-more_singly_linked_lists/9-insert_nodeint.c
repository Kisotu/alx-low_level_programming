#include "lists.h"

/**
 * insert_nodeint_at_index - fxn that inserts a node at nth position
 * @head: pointer to list head
 * @idx: index of node in list to be added
 * @n: element to add to list
 * Return: NULL or address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new_Node, *temp_Node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp_Node = *head;
		for (index = 0; index < idx - 1 && temp_Node != NULL; index++)
		{
			temp_Node = tenp_Node->next;
		}
		if (temp_Node == NULL)
			return (NULL);
	}
	new_Node = malloc(sizeof(listint_t));
	if (new_Node == NULL)
		return (NULL);
	new_Node->n = n;
	if (idx == 0)
	{
		new_Node->next = *head;
		*head = new_Node;
		return (new_Node);
	}
	new-Node->next = temp_Node->next;
	temp_Node->next = new_Node;
	return (new_Node);
}
