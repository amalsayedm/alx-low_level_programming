#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: input string
 * @c: character
 * Return: pointer to the result
*/
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		(s++);
	}

	return ('\0');
}
