#ifndef LINKED_LIST_HEADER
#define LINKED_LIST_HEADER

/**
 * struct list_s - A singly linked list
 * @str: string that has been allocated mem space
 * @next: points to the next node
 * @length: The length of the string
 * Description: Template for our linked list
 */
struct Node
{
	unsigned int length;
	char *str;
	struct Node *next;
};
typedef struct Node list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
