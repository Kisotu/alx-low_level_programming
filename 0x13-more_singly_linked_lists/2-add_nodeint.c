#include "lists.h"

/**
 * add_nodeint - Fxn that adds node to beginning of a list
 * @head: pointer to head
 * @n: the int to add to list
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->n = n;
	*head = new;
	return (*head);
}
