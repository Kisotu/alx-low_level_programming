#include "lists.h"

/**
 * sum_listint - fxn that returns sum of all nodes
 * @head: pointer to list head
 * Return: the sum of all the nodes
 */
int sum_listint(listint_t *head)
{
	int node_sum = 0;

	while (head != NULL)
	{
		node_sum += head->n;
		head = head->next;
	}

	return (node_sum);
}
