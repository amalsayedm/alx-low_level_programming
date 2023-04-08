#include "main.h"

/**
 *_strcpy - Copies a string
 *
 * @dest: A buffer to copy
 *@src: The source string
 *
 *Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	 dest[index] = src[index];

	return (dest);
}
