#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: input string
 * @c: character
 * Return: pointer to the result
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			break;
		}
		(s++);
	}

	return (s);
}
