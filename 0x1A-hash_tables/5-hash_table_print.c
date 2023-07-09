#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: the hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp_node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			temp_node = ht->array[i];
			while (temp_node != NULL)
			{
				printf("'%s': '%s'", temp_node->key, temp_node->value);
				temp_node = temp_node->next;
				if (temp_node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
