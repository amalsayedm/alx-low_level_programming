#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees alist.
 * @head: A pointer to first node of list.
 */

void free_list(list_t *head)
{
	list_t *helper;

	while (head != NULL)
	{
		helper = head->next;
		free(head->str);
		free(head);
		head = helper;
	}
}
