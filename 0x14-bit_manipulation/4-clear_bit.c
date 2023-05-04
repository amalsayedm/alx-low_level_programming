#include "main.h"

/**
 * clear_bit - Sets avalue of a bit to 0
 * @n: the number
 * @index: The index
 * Return: 1 OR - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
