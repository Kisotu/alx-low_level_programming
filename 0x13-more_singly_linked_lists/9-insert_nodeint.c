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
	listint_t *new, *currNode;

	currNode = *head;
	new = malloc(sizeof(listint_t));

	if ((*head == NULL && idx != 0) || new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		currNode = currNode->next;
		if (currNode == NULL)
		{
			return (NULL);
		}
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else if (currNode->next)
	{
		new->next = currNode->next;
		currNode->next = new;
	}
	else
	{
		new->next = NULL;
		currNode->next = new;
	}
	return (new);
}
