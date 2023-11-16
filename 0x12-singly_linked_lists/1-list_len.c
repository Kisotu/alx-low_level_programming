#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - a function that returns
 * the no of elems in list
 * @h: name of linked list
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
