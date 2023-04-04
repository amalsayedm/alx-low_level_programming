#include "main.h"
#include <stdio.h>

/**
 * _strspn - Returns the number of bytes in the initial segment
 * @s: input string
 * @accept: matching string
 * Return: nuber of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
