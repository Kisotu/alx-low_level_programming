#include "lists"

/**
 * free_listint - function that frees list's memory
 * @head: pointer to head
 * Return: void
 */
void free_listint(listit_t *head)
{
	listint_t *node;

	while ((node == head) != NULL)
	{
		head = node->next;
		free(node);
	}
}
