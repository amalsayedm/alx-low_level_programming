#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints number of nodes
 * @h: A pointer to the list head.
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
