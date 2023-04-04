#include "main.h"
/**
 * _memcpy -  copies memory area.
 * @dest: input string
 * @src: input string
 * @n: count
 *
 * Return: the string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src && i < n)
	{

		dest[i] = src[i];
		i++;
	}

	return (dest);

}
