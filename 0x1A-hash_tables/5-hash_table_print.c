#include "hash_tables.h"

/**
 * hash_table_print - Func that prints a hash table
 * @ht: hash table to print
 * Description: prints key/value pairs
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned char sep_flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (sep_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			sep_flag = 1;
		}
	}
	printf("}\n");
}
