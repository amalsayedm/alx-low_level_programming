#include "main.h"

/**
 * flip_bits - gets the number of bits needed to get from one number to another
 * @n: The number
 * @m: The number to flip in to
 * Return: The numbers of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m, count = 0;

	while (res > 0)
	{
		count += (res & 1);
		res >>= 1;
	}

	return (count);
}
