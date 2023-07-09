#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hashtable.
 * @ht: A pointer to the hashtable.
 * @key: The key
 * @value: The value
 * Return: 0 for faliure 1 Otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	char *vcopy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vcopy = strdup(value);
	if (vcopy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vcopy;
			return (1);
		}
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(vcopy);
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = vcopy;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
