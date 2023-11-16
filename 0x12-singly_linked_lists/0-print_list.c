#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - A function that prints all elems of a list
 * @h: name of the linked list
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	int counter;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);

		counter++;
		h = h->next;
	}
	return (counter);
}
