#include "search_algos.h"

int recurse_jump(int *array, size_t size, size_t step, size_t idx, int val);
int subrecurse_jump(int *array, size_t size, size_t end, size_t idx, int val);

/**
 * jump_search - implement jump search
 * @array: pointer to array
 * @size: number of elems in array
 * @value: search value
 *
 * Return: index where value is located -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_jump(array, size, sqrt(size), 0, value));
}

/**
 * recurse_jump - recursive implement of jump search
 * @array: array
 * @size: size of array
 * @step: jump increment
 * @idx: current index
 * @val: value to be searched
 *
 * Return: index where value is located -1 otherwise
 */
int recurse_jump(int *array, size_t size, size_t step, size_t idx, int val)
{
	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	/* if value is greater, jump forward */
	if (((idx + step < size) && array[idx + step] < val))
		return (recurse_jump(array, size, step, idx + step, val));

	/* recurse subarray */
	printf("Value found between indexes [%lu] and [%lu]\n", idx, (idx + step));
	return (subrecurse_jump(array, size, idx + step, idx, val));
}

/**
 * subrecurse_jump - helper to recurse_jump
 * @array: array
 * @size: size of array
 * @end: end of subarray
 * @idx: current index
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int subrecurse_jump(int *array, size_t size, size_t end, size_t idx, int val)
{
	if (idx >= size || idx > end || array[idx] > val)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	if (array[idx] == val)
		return (idx);
	else
		return (subrecurse_jump(array, size, end, idx + 1, val));
}
