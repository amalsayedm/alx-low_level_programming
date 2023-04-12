#include "main.h"
#include <stdlib.h>

/**
 * _strdup - double the input string
 * @str: The string to be copied.
 * Return: a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *newstr;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		newstr[index] = str[index];

	newstr[len] = '\0';

	return (newstr);
}
