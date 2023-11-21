#include "lists.h"

/**
 * add_nodeint_end - a fxn that adds node to end of list
 * @head: pointer to first node
 * @n: int elem to add
 * Return: address of new elem
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temporary, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temporary = *head;

	if (temporary == NULL)
		*head = new;
	else
	{
		while (temporary->next != NULL)
			temporary = temporary->next;
		temporary->next = new;
	}
	return (*head);
}
