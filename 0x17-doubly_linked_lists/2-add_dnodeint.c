
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list
 * @head:  the head of the dlistint_t list
 * @n: The data
 * Return: the address of the new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
