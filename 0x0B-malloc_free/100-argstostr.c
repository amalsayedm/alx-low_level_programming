#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates arguments into a string
 * @ac: The number of arguments
 * @av:the arguments.
 *
 * Return: a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (byte = 0; av[i][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (byte = 0; av[i][byte]; byte++)
			str[index++] = av[i][byte];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
