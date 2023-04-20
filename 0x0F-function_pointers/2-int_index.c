#include "function_pointers.h"

/**
 * int_index - Searches for an int
 * @array: The array
 * @size: The size of the array.
 * @cmp: A pointer to the function
 * Return: The index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp && size)
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
