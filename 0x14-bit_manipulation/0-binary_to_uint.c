#include "main.h"

/**
 * binary_to_uint - Converts a binary to unsigned int
 * @b: A pointer to a string
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, mult = 1, size = 0;

	if (*b == '\0')
		return (0);

	while (*b)
		{
			size++;
			b++;
		}
	b--;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		res += (*b - '0') * mult;
		mult *= 2;
		b--;
	}

	return (res);
}
