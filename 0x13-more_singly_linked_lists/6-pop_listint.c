#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: the head of the list.
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int data;

	if (*head == NULL)
		return (0);

	t = *head;
	data = (*head)->n;
	*head = (*head)->next;
free(t);

	return (data);
}
