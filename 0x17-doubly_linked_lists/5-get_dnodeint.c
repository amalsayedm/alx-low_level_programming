
#include "lists.h"

/**
 * get_dnodeint_at_index - get address of a node in alist
 * @head: The head
 * @index: Tthe index
 * Return: the address of the located node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
