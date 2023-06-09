#include "main.h"

/**
 *_strcat - Concatenates the string
 *@dest: input string
 *@src: input string
 *
 * Return: A pointer to the destination string
 */


char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
