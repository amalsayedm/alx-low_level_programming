#include "main.h"

/**
 *print_square - Prints a square
 *@size: The size of the square.
 *
 */

void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
