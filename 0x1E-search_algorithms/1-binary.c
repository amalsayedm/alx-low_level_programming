#include "search_algos.h"

int recurse_binary(int *array, size_t left, size_t right, int value);

/**
 * binary_search - search for value in array of sorted ints using binary search algo
 * @array: array
 * @size: size of array
 * @value: value to search
 *
 * Return: index of found value; or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_binary(array, 0, size - 1, value));
}

/**
 * recurse_binary - recursive implement of binary search algo
 * @array: array
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search
 *
 * Return: index of found value; or -1 if not found
 */
int recurse_binary(int *array, size_t left, size_t right, int value)
{
	size_t i = left, mid;

	if (left > right)
		return (-1);

	/* print search progress */
	printf("Searching in array: %d", array[i++]);
	while (i <= right)
		printf(", %d", array[i++]);
	printf("\n");

	/* calculate mid */
	mid = left + ((right - left) / 2);

	/* check if mid is value */
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
	{
		if (mid != 0)
			return (recurse_binary(array, left, mid - 1, value));
		else
			return (-1);
	}
	else
		return (recurse_binary(array, mid + 1, right, value));
}
