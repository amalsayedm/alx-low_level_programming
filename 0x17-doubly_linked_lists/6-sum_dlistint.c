
#include "lists.h"

/**
 * sum_dlistint - Sums all the data of alist
 * @head: The head
 * Return: The sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
