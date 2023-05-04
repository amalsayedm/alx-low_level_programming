#include "main.h"

/**
 * get_bit - gets the value of a bit
 * @n: The input
 * @index: The index
 * Return: The value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 1)
		return (1);

	return (0);
}
