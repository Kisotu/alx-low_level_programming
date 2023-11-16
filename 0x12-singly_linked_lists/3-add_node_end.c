#include "lists.h"

/**
 * add_node_end - Function that adds a node at the end of l-list
 * @head: pointer to the first node of the list
 * @str: string to add
 * Return: address of new element in the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nd, *temporary;
	size_t str_length = 0;

	if (str == NULL)
		str_length = 0;

	while (str[str_length] != '\0')
		str_length++;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->str = strdup(str);
	new_nd->len = str_length;
	new_nd->next = NULL;

	temporary = *head;

	if (temporary == NULL)
		*head = new_nd;
	else
	{
		while (temporary->next != NULL)
			temporary = temporary->next;
		temporary->next = new_nd;
	}

	return (*head);
}
