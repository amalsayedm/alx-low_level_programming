#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head_node = ht;
	hash_node_t *node_new, *tmp_node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node_new = ht->array[i];
			while (node_new != NULL)
			{
				tmp_node = node_new->next;
				free(node_new->key);
				free(node_new->value);
				free(node_new);
				node_new = tmp_node;
			}
		}
	}
	free(head_node->array);
	free(head_node);
}
