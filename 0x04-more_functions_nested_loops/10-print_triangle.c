#include "main.h"

/**
 *print_triangle - Prints a triangle, using the character #.
 *@size: input
 *
 */

void print_triangle(int size)
{
	int num, n, k;

	if (size > 0)
	{
	for (num = 1; num <= size ; num++)
	{
		for (n = size; n > num; n--)
			_putchar(' ');
		for (k = 1; k <= num; k++)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
	{
	 _putchar('\n);
	}
}
