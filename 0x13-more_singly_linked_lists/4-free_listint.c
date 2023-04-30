#include "lists.h"

/**
 * free_listint - Frees list
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
