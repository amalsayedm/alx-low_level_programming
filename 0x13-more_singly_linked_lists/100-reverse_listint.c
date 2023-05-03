#include "lists.h"

/**
 * reverse_listint - Reverses list.
 * @head: the head of the list_t list
 * Return: A pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *lat;

	if (head == NULL || *head == NULL)
		return (NULL);

	lat = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = lat;
		lat = *head;
		*head = forward;
	}

	(*head)->next = lat;

	return (*head);
}
