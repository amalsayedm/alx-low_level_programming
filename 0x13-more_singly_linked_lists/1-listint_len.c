#include "lists.h"
#include <stdio.h>

/**
 * listint_len - gets the number of nodes in alist
 * @h: head of the list.
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
