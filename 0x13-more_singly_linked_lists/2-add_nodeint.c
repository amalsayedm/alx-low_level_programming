#include "lists.h"

/**
 * add_nodeint - Adds anode at the beginning of alist
 * @head: A pointer to the head of the list
 * @n: integer data
 * Return: Apointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
newnode->n = n;
	*head = newnode;

	return (newnode);
}
