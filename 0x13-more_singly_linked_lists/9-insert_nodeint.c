#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts anode at a given position
 * @head: the head of the list
 * @idx: The index where the new node should be added
 * @n: The data
 * Return: NULL or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp = *head;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
