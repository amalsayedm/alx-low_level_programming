
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new nod at a given position.
 * @h: A pointer to the head
 * @idx: The position to insert the new node
 * @n: The data
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_node = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp_node = temp_node->next;
		if (temp_node == NULL)
			return (NULL);
	}

	if (temp_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp_node;
	new_node->next = temp_node->next;
	temp_node->next->prev = new_node;
	temp_node->next = new_node;

	return (new_node);
}
