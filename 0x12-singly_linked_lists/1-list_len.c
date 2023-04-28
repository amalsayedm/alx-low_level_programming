#include "lists.h"
#include <stdio.h>

/**
 * list_len - gets a list_t list length.
 * @h: The list_t list.
 * Return: The numbers in the list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
