#include "lists.h"

/**
 * free_listint2 - fxn that frees mem ans set head NULL
 * @head: pointer to head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary, *currNode;

	if (head != NULL)
	{
		currNode = *head;

		while ((temporary = currNode) != NULL)
		{
			currNode = currNode->next;
			free(temporary);
		}
		*head = NULL;
	}
}
