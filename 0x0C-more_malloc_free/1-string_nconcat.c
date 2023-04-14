#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates 2 strings
 * @s1: The string.
 * @s2: The string.
 * @n: the number ot bytes of s2
 * Return: a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	str = malloc((len + 1));

	if (str == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		str[index] = s1[index];

	for (len = 0; s2[len] && len < n; len++)
		str[index] = s2[len];
		index++;

	str[index] = '\0';

	return (str);
}
