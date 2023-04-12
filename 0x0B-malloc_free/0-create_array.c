#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array
 * @size: The size of the array
 * @c: The specific char to intialize the array
 * Return: a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = c;

	return (arr);
}
