#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of alist
 * @head: the head of the listint_t list.
 * @n: The integer data
 * Return: Apointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);


	newnode->next = NULL;
newnode->n = n;
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;

	return (*head);
}
