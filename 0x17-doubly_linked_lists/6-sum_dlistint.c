#include "lists.h"

/**
 * sum_dlistint - func that sums data of dlistint_t 
 * @head: pointer to head of list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int summ = 0;

	while (head)
	{
		summ += head->n;
		head = head->next;
	}

	return (summ);
}
