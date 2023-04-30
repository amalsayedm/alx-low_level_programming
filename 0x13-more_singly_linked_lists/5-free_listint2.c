
#include "lists.h"

/**
 * free_listint2 - Frees alist
 * @head: the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		head = NULL;
	}

}
