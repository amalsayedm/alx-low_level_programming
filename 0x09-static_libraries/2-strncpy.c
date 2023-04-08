#include "main.h"

/**
 *_strncpy - Copies
 *@dest: The buffer
 *@src: The source
 *@n: The maximum number of bytes to copied
 *
 * Return: A pointer to the resulting
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
