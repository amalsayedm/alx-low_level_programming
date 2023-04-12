#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: the first string
 * @s2: The seconed string
 * Return: a pointer the newly-allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int index, newindex = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		new_str[newindex++] = s1[index];

	for (index = 0; s2[index]; index++)
		new_str[newindex++] = s2[index];

	return (new_str);
}
