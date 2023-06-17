
#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in the input list
 * @h: The head of the list
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
