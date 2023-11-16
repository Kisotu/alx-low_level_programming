#include "lists.h"

/**
 * add_node - function that adds new node at the front of list_t
 * @head: first element
 * @str: the string to store in the list.
 * Return: address of the list head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;
	size_t str_length = 0;

	if (str == NULL)
		str_length = 0;

	while (str[str_length] != '\0')
		str_length++;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
		return (NULL);

	if (*head == NULL)
		new_nd->next = NULL;
	else
		new_nd->next = *head;

	new_nd->str = strdup(str);
	new_nd->len = str_len;
	*head = new_nd;

	return (*head);
}
