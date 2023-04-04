#include "main.h"

/**
 *_memset - Fills the first n bytes
 *@s: input
 *@b: character to fill
 *@n: number of bytes
 *
 *Return: Apointer to the char array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (s && i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
