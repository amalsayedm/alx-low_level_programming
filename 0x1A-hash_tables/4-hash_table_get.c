#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value of a key in a hash table.
 * @ht: the hash table.
 * @key: The key
 * Return: the value associated with key in ht or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	temp_node = ht->array[index];
	while (temp_node && strcmp(temp_node->key, key) != 0)
		temp_node = temp_node->next;

	return ((temp_node == NULL) ? NULL : temp_node->value);
}
