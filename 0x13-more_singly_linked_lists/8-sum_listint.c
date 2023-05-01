#include "lists.h"

/**
 * sum_listint - Calculates the sum of data of the list.
 * @head: the head of the list.
 * Return: the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
