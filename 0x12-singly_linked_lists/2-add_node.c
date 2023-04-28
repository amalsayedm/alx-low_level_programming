#include "lists.h"
#include <string.h>

/**
 * add_node - add node to the beginng of the list
 * @head: the pointer to the begginnig of the list
 * @str: string  to be duplicated
 * Return: pointer to the  new  added item
 */

list_t *add_node(list_t **head, const char *str)
{
	char *newstr;
	list_t *newnode = malloc(sizeof(list_t));
		int len = 0;

if (newnode == NULL)
	return (NULL);

newstr = strdup(str);
if (newstr == NULL)
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
	newnode->next = *head;
	*head = newnode;

	return (newnode);

}
