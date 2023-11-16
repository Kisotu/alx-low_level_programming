#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds new node at the front of list_t
 * @head: first element
 * @str: the string to store in the list.
 * Return: address of the list head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *data_new;
	size_t nth_char;

	data_new = malloc(sizeof(list_t));
	if (data_new == NULL)
		return (NULL);
	
	data_new->str = strdup(str);
	
	for (nth_char = 0; str[nth_char]; nth_char++)
		;
	
	data_new->len = nth_char;
	data_new->next = *head;
	*head = data_new;
	
	return (*head);
}
