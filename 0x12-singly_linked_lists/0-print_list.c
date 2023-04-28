#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints a list_t list.
 * @h: The list_t list.
 * Return: The numbers in the list.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
