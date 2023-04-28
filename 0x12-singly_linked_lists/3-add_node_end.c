#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds node to the end of a list.
 * @head: the head of the list.
 * @str: The string to be copied.
 * Return: The address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *newstr;
	int len;
	list_t *newnode, *lastnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newstr = strdup(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}

while (*str)
{
	len++;
	str++;
}

	newnode->str = newstr;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = last->next;
		lastnode->next = newnode;
	}

	return (*head)
}
