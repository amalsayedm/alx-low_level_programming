#include "search_algos.h"

int recurse_interpolation(int *array, size_t left, size_t right, int value);

/**
 * interpolation_search - implementation of interpolation algo
 * @array: array to search
 * @size: size of array
 * @value: search value
 *
 * Return: index of matched value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_interpolation(array, 0, size - 1, value));
}
/**
 * recurse_interpolation - recursive implement of interpolation
 * @array: array
 * @left: left bound of subarray
 * @right: right bound of subarray
 * @value: search value
 *
 * Return: index of found value or -1 if not found
 */
int recurse_interpolation(int *array, size_t left, size_t right, int value)
{
	size_t pos = left + (((double)(right - left) /
(array[right] - array[left])) * (value - array[left]));

	if (pos > right)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}

	if (left > right)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value) /* over-shot; move left */
		return (recurse_interpolation(array, left, pos - 1, value));
	else /* under-shot; move right */
		return (recurse_interpolation(array, pos + 1, right, value));
}
