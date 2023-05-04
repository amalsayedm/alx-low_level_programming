#include "main.h"

/**
 * get_endianness - Checks endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *res = (char *)&e;

	if (*res == 1)
		return (1);
	else
		return (0);
}
