#include "lists.h"

/**
 * get_nodeint_at_index - gets anode in agiven index
 * @head: the head of the list.
 * @index: The index
 * Return: the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}

	return (head);
}
