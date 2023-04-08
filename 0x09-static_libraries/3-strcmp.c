#include "main.h"

/**
 *_strcmp - Compares strings
 *@s1: first str
 *@s2: seconed str
 *
 *Return: result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			break;
		}
	}

	return (*s1 - *s2);

}
