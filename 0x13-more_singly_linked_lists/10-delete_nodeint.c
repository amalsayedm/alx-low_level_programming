#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes anode at a given index
 * @head: the head of the list.
 * @index: The index of the node to be deleted
 * Return: On success 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	t = temp->next;
	temp->next = t->next;
	free(t);
	return (1);
}
