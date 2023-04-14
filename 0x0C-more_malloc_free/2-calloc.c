#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: a pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	filler = arr;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (arr);
}
